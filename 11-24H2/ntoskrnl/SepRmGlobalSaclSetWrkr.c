/*
 * XREFs of SepRmGlobalSaclSetWrkr @ 0x1407948C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SepRmFetchGlobalSacl @ 0x1407946EC (SepRmFetchGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x14088DDC4 (SepRmGlobalSaclFind.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepRmGlobalSaclSetWrkr(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  const void *v3; // r12
  char v5; // r15
  int GlobalSacl; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rbx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  _QWORD *Pool2; // rbx
  void *v13; // rax
  STRSAFE_PCNZWCH v14[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG v15; // [rsp+80h] [rbp+48h] BYREF
  PVOID v16; // [rsp+88h] [rbp+50h] BYREF
  PVOID P; // [rsp+90h] [rbp+58h] BYREF
  _QWORD *v18; // [rsp+98h] [rbp+60h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 44);
  v3 = (const void *)(a1 + 46);
  P = 0LL;
  HIDWORD(v14[0]) = 0;
  WORD1(v14[0]) = v2;
  LOWORD(v14[0]) = v2;
  v14[1] = (STRSAFE_PCNZWCH)(a1 + 46);
  v18 = 0LL;
  v5 = 0;
  v15 = 0;
  v16 = 0LL;
  GlobalSacl = SepRmFetchGlobalSacl(v14, &v15, &v16);
  if ( GlobalSacl >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 1;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&SepRmGlobalSaclLock, 1u);
    GlobalSacl = SepRmGlobalSaclFind(&P, &v18, v14, 0LL);
    if ( GlobalSacl < 0 )
    {
      if ( !v15 )
        goto LABEL_21;
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x6C635347u);
      if ( Pool2 )
      {
        v13 = (void *)ExAllocatePool2(0x100uLL, v2, 0x6C635347u);
        Pool2[2] = v13;
        if ( v13 )
        {
          *((_WORD *)Pool2 + 5) = v2;
          *((_WORD *)Pool2 + 4) = v2;
          memmove(v13, v3, v2);
          Pool2[3] = v16;
          *Pool2 = SepRmGlobalSaclHead;
          v16 = 0LL;
          SepRmGlobalSaclHead = (__int64)Pool2;
          goto LABEL_21;
        }
        ExFreePoolWithTag(Pool2, 0);
      }
      GlobalSacl = -1073741801;
      goto LABEL_21;
    }
    v8 = P;
    if ( v15 )
    {
      v9 = (void *)*((_QWORD *)P + 3);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      v8[3] = v16;
LABEL_24:
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      KeLeaveCriticalRegion();
      goto LABEL_25;
    }
    if ( v18 )
      *v18 = *(_QWORD *)P;
    else
      SepRmGlobalSaclHead = *(_QWORD *)P;
    v10 = (void *)v8[2];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      v8[2] = 0LL;
    }
    v11 = (void *)v8[3];
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v8[3] = 0LL;
    }
    ExFreePoolWithTag(v8, 0);
  }
LABEL_21:
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( v5 )
    goto LABEL_24;
LABEL_25:
  *(_DWORD *)(a2 + 40) = GlobalSacl;
}

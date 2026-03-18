/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x140938898
 * Callers:
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspExitProcess @ 0x1409387A0 (PspExitProcess.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PsReferenceProcessFilePointer @ 0x1408FF760 (PsReferenceProcessFilePointer.c)
 *     PsTerminateProcess @ 0x140938BD4 (PsTerminateProcess.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(struct _EX_RUNDOWN_REF *a1, __int64 a2, char a3)
{
  unsigned __int64 ExtensionTable; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  unsigned int v9; // r12d
  int v10; // r13d
  unsigned __int64 Count; // rcx
  unsigned __int64 v12; // rsi
  __int64 *v13; // rbx
  __int64 i; // r14
  struct _EX_RUNDOWN_REF *v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rsi
  int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // rdx
  void (__stdcall *v21)(PKSPIN_LOCK, KIRQL); // r8
  KSPIN_LOCK *v22; // rcx
  int v23; // eax
  __int128 v24; // xmm0
  char *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // [rsp+20h] [rbp-49h]
  unsigned __int64 v29; // [rsp+28h] [rbp-41h]
  unsigned __int64 v30; // [rsp+30h] [rbp-39h]
  __int64 v31; // [rsp+40h] [rbp-29h] BYREF
  int v32; // [rsp+48h] [rbp-21h]
  unsigned __int64 v33; // [rsp+50h] [rbp-19h]
  __int128 v34; // [rsp+58h] [rbp-11h]
  PVOID v35; // [rsp+68h] [rbp-1h]
  __int128 v36; // [rsp+70h] [rbp+7h]
  int v37; // [rsp+80h] [rbp+17h]
  char v38; // [rsp+D0h] [rbp+67h]
  PVOID Object; // [rsp+E8h] [rbp+7Fh] BYREF

  memset_0(&v31, 0, 0x48uLL);
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  v29 = ExtensionTable;
  v7 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  v9 = 0;
  Object = 0LL;
  v10 = PspNotifyEnableMask & 4;
  Count = a1[200].Count;
  v12 = v7;
  v28 = v7;
  v38 = 0;
  v30 = Count;
  if ( a3 && ((PspNotifyEnableMask & 4) != 0 || ExtensionTable || v7) )
  {
    v23 = 0;
    v31 = 72LL;
    if ( Count )
      v23 = 2;
    v32 = v23;
    v33 = a1[90].Count;
    v24 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    v37 = 0;
    v34 = v24;
    if ( Count )
    {
      v35 = 0LL;
      v36 = 0LL;
      if ( a2 )
      {
        v27 = *(_QWORD *)(a2 + 416);
        if ( v27 )
        {
          v35 = *(PVOID *)v27;
          v36 = *(_OWORD *)(v27 + 8);
        }
      }
      goto LABEL_43;
    }
    if ( a2 && (v25 = *(char **)(a2 + 184)) != 0LL )
    {
      Object = *(PVOID *)(a2 + 184);
      v35 = v25;
    }
    else
    {
      PsReferenceProcessFilePointer(a1, (__int64 *)&Object);
      v25 = (char *)Object;
      v35 = Object;
      v38 = 1;
      if ( !a2 )
        goto LABEL_47;
    }
    if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
    {
      v32 |= 1u;
      *(_QWORD *)&v36 = a2 + 240;
LABEL_41:
      v26 = *(_QWORD *)(a2 + 216);
      if ( v26 )
      {
        *((_QWORD *)&v36 + 1) = v26 + 112;
LABEL_43:
        v13 = &v31;
        goto LABEL_3;
      }
LABEL_48:
      *((_QWORD *)&v36 + 1) = 0LL;
      goto LABEL_43;
    }
LABEL_47:
    *(_QWORD *)&v36 = v25 + 88;
    if ( !a2 )
      goto LABEL_48;
    goto LABEL_41;
  }
  v13 = 0LL;
LABEL_3:
  if ( (PspNotifyEnableMask & 2) != 0 || v10 )
  {
    for ( i = 0LL; (unsigned int)i < 0x40; i = (unsigned int)(i + 1) )
    {
      v16 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i);
      v17 = v16;
      if ( v16 )
      {
        v18 = v16[2].Count;
        if ( !v30 || (v18 & 4) != 0 )
        {
          if ( (v18 & 2) != 0 )
          {
            if ( v10 )
              guard_dispatch_icall_no_overrides(a1, a1[58].Count, v13, v8);
          }
          else
          {
            v21 = KeReleaseSpinLock;
            v20 = a1[58].Count;
            LOBYTE(v21) = a3;
            v22 = (KSPIN_LOCK *)a1[90].Count;
            if ( (void (__stdcall *)(PKSPIN_LOCK, KIRQL))v17[1].Count == KeReleaseSpinLock )
              KeReleaseSpinLock(v22, v20);
            else
              guard_dispatch_icall_no_overrides(v22, v20, v21, v8);
          }
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, v17);
        if ( v13 )
        {
          v19 = *((_DWORD *)v13 + 16);
          if ( v19 < 0 )
          {
            v9 = *((_DWORD *)v13 + 16);
            PsTerminateProcess(a1, (unsigned int)v19);
            break;
          }
        }
      }
    }
    ExtensionTable = v29;
    v12 = v28;
  }
  if ( v12 && (!v13 || *((int *)v13 + 16) >= 0) )
  {
    guard_dispatch_icall_no_overrides(a1, a1[58].Count, v13, v8);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  if ( ExtensionTable && (!v13 || *((int *)v13 + 16) >= 0) )
  {
    guard_dispatch_icall_no_overrides(a1, a1[58].Count, v13, v8);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  }
  if ( v38 )
    ObfDereferenceObject(Object);
  return v9;
}

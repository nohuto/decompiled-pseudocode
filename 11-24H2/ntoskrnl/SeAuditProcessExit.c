/*
 * XREFs of SeAuditProcessExit @ 0x140790D28
 * Callers:
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     SepAdtLogAuditRecord @ 0x1403C288C (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140860D60 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditProcessExit(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  int AllocatedFullProcessImageName; // eax
  ULONG_PTR v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // edx
  int v9; // eax
  PVOID P[2]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD Src[12]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h]
  int v13; // [rsp+70h] [rbp-98h]
  int v14; // [rsp+74h] [rbp-94h]
  const int *v15; // [rsp+88h] [rbp-80h]
  int v16; // [rsp+90h] [rbp-78h]
  int v17; // [rsp+94h] [rbp-74h]
  __int64 v18; // [rsp+98h] [rbp-70h]
  int v19; // [rsp+B0h] [rbp-58h]
  int v20; // [rsp+B4h] [rbp-54h]
  __int64 v21; // [rsp+B8h] [rbp-50h]
  int v22; // [rsp+D0h] [rbp-38h]
  int v23; // [rsp+D4h] [rbp-34h]
  __int64 v24; // [rsp+D8h] [rbp-30h]
  int v25; // [rsp+F0h] [rbp-18h]
  int v26; // [rsp+F4h] [rbp-14h]
  PVOID v27; // [rsp+108h] [rbp+0h]

  P[0] = 0LL;
  v3 = a2;
  memset_0(Src, 0, 0x418uLL);
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(a1, P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
  else
  {
    v5 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
    v6 = **(_QWORD **)(v5 + 152);
    v7 = *(_QWORD *)(v5 + 24);
    Src[0] = 5;
    Src[4] = 524423;
    Src[1] = 4689;
    Src[6] = 4;
    v8 = *(unsigned __int8 *)(v6 + 1);
    v18 = v7;
    v15 = &SeSubsystemName;
    v24 = *(_QWORD *)(a1 + 464);
    Src[7] = 4 * v8 + 8;
    v12 = v6;
    v13 = 1;
    v14 = 32;
    v16 = 5;
    v17 = 8;
    v19 = 10;
    v20 = 4;
    v21 = v3;
    v22 = 11;
    v23 = 8;
    v25 = 2;
    v9 = *(unsigned __int16 *)P[0] + 16;
    v27 = P[0];
    v26 = v9;
    Src[2] = 6;
    SepAdtLogAuditRecord(Src);
    ObfDereferenceObject((PVOID)v5);
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
}

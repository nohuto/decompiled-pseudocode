/*
 * XREFs of MiLogStrongCodeDriverLoadFailure @ 0x140AAB2DC
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A659F0 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiSetImportTableProtection @ 0x140AAB19C (MiSetImportTableProtection.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1404397B4 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A083C (_tlgWriteEx_EtwWriteEx.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404D2990 (MmAcquireLoadLock.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

void __fastcall MiLogStrongCodeDriverLoadFailure(const CHAR *Src, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 Pool; // rax
  __int64 v7; // rbx
  void *v8; // rcx
  struct _KTHREAD *Lock; // rax
  __int64 *v10; // rcx
  int v11; // [rsp+20h] [rbp-79h]
  int v12; // [rsp+28h] [rbp-71h]
  int v13; // [rsp+40h] [rbp-59h] BYREF
  int v14; // [rsp+44h] [rbp-55h] BYREF
  __int64 v15; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v17[16]; // [rsp+70h] [rbp-29h] BYREF
  _DWORD *v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  __int64 v21; // [rsp+90h] [rbp-9h]
  _DWORD v22[2]; // [rsp+98h] [rbp-1h] BYREF
  int *v23; // [rsp+A0h] [rbp+7h]
  int v24; // [rsp+A8h] [rbp+Fh]
  int v25; // [rsp+ACh] [rbp+13h]
  int *v26; // [rsp+B0h] [rbp+17h]
  int v27; // [rsp+B8h] [rbp+1Fh]
  int v28; // [rsp+BCh] [rbp+23h]
  __int64 *v29; // [rsp+C0h] [rbp+27h]
  int v30; // [rsp+C8h] [rbp+2Fh]
  int v31; // [rsp+CCh] [rbp+33h]

  if ( *(_QWORD *)&qword_140E37518 )
  {
    if ( **(_DWORD **)&qword_140E37518 > 2u && tlgKeywordOn(*(__int64 *)&qword_140E37518, 0x400000004000LL) )
    {
      tlgCreate1Sz_char((__int64)v17, Src);
      v20 = 0;
      v22[1] = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v18 = v22;
      v21 = *(_QWORD *)(a2 + 96);
      v22[0] = *(unsigned __int16 *)(a2 + 88);
      v13 = *(_DWORD *)(a2 + 120);
      v23 = &v13;
      v14 = *(_DWORD *)(a2 + 156);
      v26 = &v14;
      v15 = 2164260864LL;
      v24 = 4;
      v27 = 4;
      v29 = &v15;
      v30 = 8;
      v19 = 2;
      tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&byte_1400561EB, v4, 1u, v11, v12, 8u, &v16);
    }
  }
  else
  {
    v5 = -1LL;
    do
      ++v5;
    while ( Src[v5] );
    Pool = MiAllocatePool(0x100uLL, v5 + *(unsigned __int16 *)(a2 + 88) + 49LL, 1178889549);
    v7 = Pool;
    if ( Pool )
    {
      *(_QWORD *)(Pool + 16) = Pool + 48;
      memmove((void *)(Pool + 48), Src, v5 + 1);
      v8 = (void *)(v7 + v5 + 49);
      *(_QWORD *)(v7 + 32) = v8;
      memmove(v8, *(const void **)(a2 + 96), *(unsigned __int16 *)(a2 + 88));
      *(_WORD *)(v7 + 24) = *(_WORD *)(a2 + 88);
      *(_WORD *)(v7 + 26) = *(_WORD *)(a2 + 88);
      *(_DWORD *)(v7 + 40) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(v7 + 44) = *(_DWORD *)(a2 + 156);
      Lock = MmAcquireLoadLock();
      v10 = (__int64 *)qword_140E2D838;
      if ( *(PVOID **)qword_140E2D838 != &qword_140E2D830 )
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = qword_140E2D838;
      *(_QWORD *)v7 = &qword_140E2D830;
      *v10 = v7;
      qword_140E2D838 = v7;
      MmReleaseLoadLock(Lock);
    }
  }
}

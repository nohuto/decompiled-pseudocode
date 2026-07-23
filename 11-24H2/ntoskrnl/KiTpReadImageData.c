/*
 * XREFs of KiTpReadImageData @ 0x14073C004
 * Callers:
 *     RtlIcParseInstruction @ 0x140BB90E8 (RtlIcParseInstruction.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall KiTpReadImageData(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // edi
  _KPROCESS *v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD v13[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v13, 0, sizeof(v13));
  v7 = 4096 - (*(_DWORD *)(a1 + 16) & 0xFFF);
  if ( v7 > a3 )
    v7 = a3;
  v8 = *(_KPROCESS **)a1;
  if ( v8 )
    KiStackAttachProcess(v8, 0, (__int64)v13);
  memmove(a2, *(const void **)(a1 + 16), v7);
  if ( a4 )
    *a4 = v7;
  v9 = *(_DWORD *)(a1 + 32);
  if ( v9 >= v7 )
    v9 = v7;
  memmove(*(void **)(a1 + 24), a2, v9);
  if ( *(_QWORD *)a1 )
    KiUnstackDetachProcess((__int64)v13, 0, v10, v11);
  return 0LL;
}

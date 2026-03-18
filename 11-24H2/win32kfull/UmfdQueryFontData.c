/*
 * XREFs of UmfdQueryFontData @ 0x1401007F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x14010090C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  int v11; // eax
  unsigned int v12; // ecx
  void **v14; // [rsp+38h] [rbp-51h] BYREF
  int v15; // [rsp+40h] [rbp-49h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-41h]
  __int64 v17; // [rsp+50h] [rbp-39h]
  char v18; // [rsp+58h] [rbp-31h]
  __int64 v19; // [rsp+60h] [rbp-29h]
  int v20; // [rsp+68h] [rbp-21h]
  int v21; // [rsp+6Ch] [rbp-1Dh]
  __int64 v22; // [rsp+70h] [rbp-19h]
  __int64 v23; // [rsp+78h] [rbp-11h]
  __int64 v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  __int64 v27; // [rsp+90h] [rbp+7h]
  __int128 v28; // [rsp+98h] [rbp+Fh]
  __int128 ThreadInformation; // [rsp+A8h] [rbp+1Fh] BYREF

  v15 = 2;
  CurrentThread = KeGetCurrentThread();
  v18 = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v17 = ThreadInformation;
    v18 = 1;
  }
  v27 = 0LL;
  v14 = &QueryFontDataRequest::`vftable';
  v23 = a5;
  v21 = a4;
  v24 = a6;
  v25 = a7;
  v28 = 0LL;
  v19 = a1;
  v22 = a2;
  v20 = a3;
  v26 = -1;
  v11 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 20LL), &v14);
  v12 = v26;
  if ( v11 < 0 )
    return (unsigned int)-1;
  return v12;
}

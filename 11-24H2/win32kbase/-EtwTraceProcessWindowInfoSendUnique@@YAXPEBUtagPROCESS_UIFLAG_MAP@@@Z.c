/*
 * XREFs of ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x14009C4C8
 * Callers:
 *     EtwTraceProcessWindowInfo @ 0x14009C270 (EtwTraceProcessWindowInfo.c)
 * Callees:
 *     McTemplateK0qqmx_EtwWriteTransfer @ 0x14009C76C (McTemplateK0qqmx_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceProcessWindowInfoSendUnique(const struct tagPROCESS_UIFLAG_MAP *a1)
{
  __int64 UserSessionState; // r10
  unsigned int v3; // edx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r9
  int v7; // ecx
  __int128 v8; // xmm1

  UserSessionState = W32GetUserSessionState(a1);
  v3 = 0;
  v4 = UserSessionState + 69480;
  while ( 1 )
  {
    if ( v3 >= 0x14 )
      goto LABEL_10;
    v5 = 32LL * v3;
    v6 = v5 + UserSessionState + 69480;
    if ( *(_DWORD *)(v5 + UserSessionState + 69504) < *(_DWORD *)(v4 + 24) )
      v4 = v5 + UserSessionState + 69480;
    if ( *(_QWORD *)v6 == *(_QWORD *)a1 )
      break;
    ++v3;
  }
  if ( !v6 )
  {
LABEL_10:
    v6 = v4;
    v8 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v4 = *(_OWORD *)a1;
    *(_OWORD *)(v4 + 16) = v8;
    goto LABEL_11;
  }
  v7 = *((_DWORD *)a1 + 5);
  v3 = *(_DWORD *)(v6 + 20);
  *(_DWORD *)(v6 + 24) = *((_DWORD *)a1 + 6);
  if ( (v3 & v7) == v7 )
    return;
  *(_DWORD *)(v6 + 20) = v3 | v7;
LABEL_11:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000000LL) != 0 )
    McTemplateK0qqmx_EtwWriteTransfer(v6 + 8, v3, v4, *(_DWORD *)(v6 + 20), *(_DWORD *)(v6 + 16), v6 + 8, *(_QWORD *)v6);
}

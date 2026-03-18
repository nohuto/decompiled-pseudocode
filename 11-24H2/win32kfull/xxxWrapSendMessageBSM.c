/*
 * XREFs of xxxWrapSendMessageBSM @ 0x140238840
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageBSM @ 0x1401171C0 (xxxSendMessageBSM.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall xxxWrapSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        _BYTE *Src)
{
  _BYTE *v9; // rdx
  int v10; // eax
  __int64 v11; // rsi
  _OWORD v13[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v14; // [rsp+90h] [rbp-38h]

  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  v9 = Src;
  if ( (unsigned __int64)Src >= MmUserProbeAddress )
    v9 = (_BYTE *)MmUserProbeAddress;
  *v9 = *v9;
  v9[39] = v9[39];
  RtlCopyVolatileMemory(v13, Src, 0x28uLL);
  if ( (v13[0] & 0x10) != 0 && !(unsigned __int8)HasTcbPrivilege() )
  {
    LODWORD(v13[0]) &= ~0x10u;
    RtlCopyVolatileMemory(Src, v13, 0x28uLL);
  }
  v10 = xxxSendMessageBSM(a1, a2, a3, a4, (struct tagBROADCASTSYSTEMMSGPARAMS *)v13, 0);
  v11 = v10;
  if ( !v10 && (BYTE4(v13[0]) & 1) != 0 )
    RtlCopyVolatileMemory(Src, v13, 0x28uLL);
  return v11;
}

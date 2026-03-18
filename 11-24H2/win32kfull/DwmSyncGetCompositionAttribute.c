/*
 * XREFs of DwmSyncGetCompositionAttribute @ 0x14025C770
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1402974D0 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x14010B4C0 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1401BB778 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline @ 0x1403244C8 (Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DwmSyncGetCompositionAttribute(PVOID Object, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r15
  int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-69h] BYREF
  _PORT_MESSAGE v14; // [rsp+40h] [rbp-59h] BYREF
  int v15; // [rsp+68h] [rbp-31h]
  int v16; // [rsp+6Ch] [rbp-2Dh]
  __int64 v17; // [rsp+70h] [rbp-29h]
  int v18; // [rsp+78h] [rbp-21h]
  int v19; // [rsp+7Ch] [rbp-1Dh]
  __int128 Src; // [rsp+80h] [rbp-19h] BYREF
  __int64 v21; // [rsp+90h] [rbp-9h]

  v4 = a3;
  v8 = -1073741823;
  if ( Object )
  {
    v8 = DwmSyncLPCAllowed();
    if ( v8 >= 0 )
    {
      memset_0(&v14, 0, 0x58uLL);
      v14.u1.s1.TotalLength = 88;
      v14.u1.s1.DataLength = word_1403579D8[8 * v4] + 24;
      if ( (unsigned int)Feature_Servicing_AlpcDwm__private_IsEnabledDeviceUsageNoInline()
        && (unsigned __int16)v14.u1.s1.TotalLength > (unsigned __int64)(unsigned __int16)v14.u1.s1.DataLength + 40 )
      {
        v14.u1.s1.TotalLength = v14.u1.s1.DataLength + 40;
      }
      v9 = *(_OWORD *)a4;
      v10 = a4[2];
      v15 = 1073741867;
      v14.u2.s2.Type = 0x8000;
      v19 = word_1403579D8[8 * v4];
      v16 = 1;
      v17 = a2;
      v18 = v4;
      Src = v9;
      v21 = v10;
      v13 = 88LL;
      v11 = LpcSendWaitReceivePort(Object, 0x20000LL, &v14, &v14, &v13, 0LL);
      v8 = SyncLpcCheckNtStatus(v11, &v14);
      if ( v8 >= 0 )
        memmove(a4, &Src, *(_QWORD *)&word_1403579D8[8 * v4]);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}

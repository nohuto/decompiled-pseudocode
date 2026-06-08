/*
 * XREFs of sub_140035068 @ 0x140035068
 * Callers:
 *     sub_14002C5F0 @ 0x14002C5F0 (sub_14002C5F0.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_140035068(char *DeferredContext)
{
  __int64 v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  unsigned __int16 v5; // r9
  int v7; // [rsp+30h] [rbp-51h]
  __int128 v8; // [rsp+38h] [rbp-49h] BYREF
  __int64 v9; // [rsp+48h] [rbp-39h]
  __int64 v10; // [rsp+50h] [rbp-31h]
  __int128 v11; // [rsp+58h] [rbp-29h]
  __int64 v12; // [rsp+68h] [rbp-19h]
  _DWORD v13[3]; // [rsp+78h] [rbp-9h] BYREF
  char v14; // [rsp+85h] [rbp+4h]
  __int64 (__fastcall *v15)(int, int, int, int, int); // [rsp+A0h] [rbp+1Fh]
  __int64 v16; // [rsp+E8h] [rbp+67h] BYREF

  v16 = 0LL;
  DeferredContext[77] = 0;
  DWORD1(v8) = 0;
  *((_DWORD *)DeferredContext + 184) = 100;
  *((_DWORD *)DeferredContext + 185) = 100;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(qword_140019120 + 1632))(qword_140019128, DeferredContext);
  v9 = 0LL;
  v12 = 0LL;
  v8 = 0LL;
  LODWORD(v8) = 56;
  v10 = 0x100000001LL;
  v11 = (unsigned __int64)v2;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, char *))(qword_140019120 + 2496))(
         qword_140019128,
         &v8,
         DeferredContext + 208);
  v4 = v3;
  if ( v3 >= 0 )
  {
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 776), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 840), (PKDEFERRED_ROUTINE)sub_140005200, DeferredContext);
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 928), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 992), (PKDEFERRED_ROUTINE)sub_14000D650, DeferredContext);
    if ( _bittest64(qword_140019140, 0x2Fu) )
    {
      sub_140010680((char *)v13, 0, 0x60uLL);
      v13[0] = 96;
      v15 = sub_140044C20;
      v13[2] = 2;
      v14 = 1;
      v13[1] = 1;
      v3 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, _QWORD, __int64 *))(qword_140019120 + 1216))(
             qword_140019128,
             v2,
             v13,
             0LL,
             &v16);
      v4 = v3;
      if ( v3 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v5 = 31;
        goto LABEL_8;
      }
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v5 = 30;
LABEL_8:
    v7 = v3;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, v5, (__int64)&unk_140012AE0, v7);
  }
  return v4;
}

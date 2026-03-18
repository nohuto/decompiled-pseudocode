/*
 * XREFs of RootHub_D0Entry @ 0x140028D68
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 * Callees:
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000BED4 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000C924 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall RootHub_D0Entry(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // r14
  unsigned int v4; // r15d
  unsigned int *v5; // rbp
  int Ulong; // eax
  __int64 v7; // rbx
  char v8; // dl
  unsigned __int16 v10; // r9
  __int16 v11; // ax
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]

  v1 = 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_BYTE *)(a1 + 57) = 1;
  while ( v1 <= *(_DWORD *)(a1 + 16) )
  {
    v4 = v1 - 1;
    v5 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * (v1 - 1));
    Ulong = XilRegister_ReadUlong(v3, v5);
    v7 = 120LL * (v1 - 1);
    v8 = *(_BYTE *)(v7 + *(_QWORD *)(a1 + 48) + 13);
    if ( v8 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 31;
        goto LABEL_10;
      }
    }
    else
    {
      if ( v8 != 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v13) = *(unsigned __int8 *)(v7 + *(_QWORD *)(a1 + 48) + 13);
          LODWORD(v12) = v1;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            0x21u,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v12,
            v13);
        }
        goto LABEL_5;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 32;
LABEL_10:
        LODWORD(v13) = Ulong;
        LODWORD(v12) = v1;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xBu,
          v10,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v12,
          v13);
      }
    }
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 736LL) & 0x20000000LL) != 0
      && (*(_DWORD *)(v7 + *(_QWORD *)(a1 + 48) + 64) & 2) == 0 )
    {
      RootHub_AcquireReadModifyWriteLock(a1, v4);
      v11 = XilRegister_ReadUlong(v3, v5);
      XilRegister_WriteUlong(v3, v5, v11 & 0xC200 | 0xE000000);
      RootHub_ReleaseReadModifyWriteLock(a1, v4);
    }
LABEL_5:
    ++v1;
  }
  return 0LL;
}

/*
 * XREFs of HUBMISC_GenerateControllerSuffix @ 0x140030164
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBID_BuildClassCompatibleID @ 0x14001E360 (HUBID_BuildClassCompatibleID.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x14001D294 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_H @ 0x140034464 (WPP_RECORDER_SF_H.c)
 *     WPP_RECORDER_SF_HH @ 0x140034510 (WPP_RECORDER_SF_HH.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 */

__int64 __fastcall HUBMISC_GenerateControllerSuffix(_QWORD *a1, _WORD *a2, __int64 a3, int a4)
{
  _WORD *v4; // rdi
  const void ***v6; // r8
  const void **v7; // rbx
  int v8; // ecx
  int v9; // r8d
  NTSTATUS v10; // ebx
  __int64 v11; // rbp
  int v12; // r9d
  unsigned __int16 v13; // r8
  unsigned __int64 v14; // rcx
  NTSTATUS v16; // [rsp+28h] [rbp-30h]

  v4 = a2;
  *a2 = 0;
  v6 = (const void ***)(*a1 + 176LL);
  if ( *(_DWORD *)(*a1 + 168LL) == 3 && (v7 = *v6, LODWORD(a2) = *(unsigned __int16 *)*v6, (_WORD)a2) )
  {
    v8 = (unsigned __int16)v4[1];
    v9 = v8 - 2;
    if ( (unsigned __int16)(v8 - 2) > 4u )
    {
      v11 = (unsigned __int16)v9;
      v12 = (unsigned __int16)v9 - 4;
      if ( (int)a2 >= v12 )
      {
        LOWORD(a2) = v8 - 6;
      }
      else
      {
        v13 = (unsigned __int16)a2;
        do
        {
          v14 = v13;
          v13 += 2;
          *(_WORD *)(*((_QWORD *)v4 + 1) + 2 * (v14 >> 1)) = 48;
        }
        while ( v13 < v12 );
      }
      memmove(*((void **)v4 + 1), v7[1], (unsigned __int16)a2);
      v10 = RtlStringCbPrintfW(
              (NTSTRSAFE_PWSTR)(*((_QWORD *)v4 + 1) + 2 * ((unsigned __int64)(v11 - 4) >> 1)),
              6uLL,
              L"%02X",
              *(unsigned __int16 *)v7);
      if ( v10 >= 0 )
      {
        *v4 = v4[1] - 2;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = v10;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          5u,
          0x7Du,
          (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids,
          v16);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_HH(*(_QWORD *)(a1[1] + 1432LL), (_DWORD)a2, v9, a4);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_H(*(_QWORD *)(a1[1] + 1432LL), (_DWORD)a2, (_DWORD)v6, a4);
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v10;
}

/*
 * XREFs of RootHub_ForceU0AndWait @ 0x140028EFC
 * Callers:
 *     RootHub_ForceU3 @ 0x1400195BC (RootHub_ForceU3.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140026440 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000BED4 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000C924 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall RootHub_ForceU0AndWait(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  unsigned int v4; // ecx
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned int *v7; // r13
  __int64 v8; // rax
  int Ulong; // eax
  int v10; // edx
  int v11; // esi
  int v12; // esi
  int v13; // r9d
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // ebx
  unsigned int v18; // ebx
  char v19; // al
  int v20; // edx
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rbx
  int v26; // esi
  int i; // r13d
  unsigned int v28; // eax
  unsigned int v29; // ebx
  int v30; // edx
  __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+30h] [rbp-48h]
  unsigned int *v34; // [rsp+80h] [rbp+8h]
  unsigned int v35; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+90h] [rbp+18h]

  v2 = a1[1];
  v4 = a2 - 1;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 88);
  v34 = (unsigned int *)(16LL * (unsigned int)(a2 - 1) + a1[5]);
  v36 = v6;
  v35 = a2 - 1;
  v7 = v34 + 1;
  v8 = a1[6] + 120LL * (unsigned int)(a2 - 1);
  if ( *(_BYTE *)(v8 + 13) == 2 )
  {
    if ( !*(_BYTE *)(v8 + 23) )
      return v5;
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v4);
    Ulong = XilRegister_ReadUlong(v6, v7);
    v11 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v10,
        11,
        248,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        Ulong);
    }
    v12 = v11 & 0xFFFEFFFF;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 249;
LABEL_24:
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v10,
        11,
        v13,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v12);
    }
  }
  else
  {
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        v14,
        11,
        250,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
    v15 = XilRegister_ReadUlong(v6, v7);
    v17 = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v16,
        11,
        251,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v15);
    }
    v18 = v17 & 0xFFFF0000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v16,
        11,
        252,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v18);
    }
    XilRegister_WriteUlong(v6, v7, v18);
    v19 = XilRegister_ReadUlong(v6, v7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v20,
        11,
        253,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v19);
    }
    v7 = v34;
    v21 = XilRegister_ReadUlong(v6, v34);
    v22 = v21;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v10,
        11,
        254,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v21);
    }
    v23 = a1[1];
    if ( (*(_QWORD *)(v23 + 744) & 0x40) != 0 )
    {
      if ( (v22 & 0x400000) != 0 )
      {
        ++*(_DWORD *)(v23 + 900);
        ++*(_DWORD *)(v23 + 944);
        *(_BYTE *)(v23 + 872) = 1;
      }
      v24 = 239124992;
    }
    else
    {
      v24 = 234930688;
    }
    v12 = v22 & v24 | 0x10000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 255;
      goto LABEL_24;
    }
  }
  v25 = v36;
  XilRegister_WriteUlong(v36, v7, v12);
  RootHub_ReleaseReadModifyWriteLock((__int64)a1, v35);
  v26 = 6400;
  for ( i = 0; ; i += 10 )
  {
    v28 = XilRegister_ReadUlong(v25, v34);
    v29 = v28;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v33) = v28;
      LODWORD(v32) = i;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0x100u,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v32,
        v33);
    }
    if ( v29 == -1 )
      return (unsigned int)-1073741823;
    v30 = (v29 >> 5) & 0xF;
    if ( !v30 )
      return v5;
    if ( ((v30 - 5) & 0xFFFFFFFA) == 0 && v30 != 9 || (v29 & 0x20203) != 0x203 || v30 == 4 )
      return (unsigned int)-1073741823;
    if ( ((v30 - 9) & 0xFFFFFFFD) == 0 )
      break;
    if ( (v29 & 0x10) != 0 || !v26 )
      return (unsigned int)-1073741823;
    --v26;
    KeStallExecutionProcessor(0xAu);
    v25 = v36;
  }
  v5 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v30) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      v30,
      11,
      257,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      (v29 >> 5) & 0xF);
  }
  return v5;
}

/*
 * XREFs of DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1402419C8
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400593B8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiDxgkDdiStopDevice @ 0x14024DB58 (DpiDxgkDdiStopDevice.c)
 *     DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership @ 0x14024DC1C (DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiFdoStopDeviceAndReleasePostDisplayOwnership(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v5; // esi
  __int64 v6; // r15
  __int64 v7; // rcx
  bool IsPostDevice; // di
  __int128 *v9; // r14
  PVOID ContiguousMemory; // rax
  char *v11; // rcx
  __int128 *v12; // rcx
  char v13; // al
  char *v14; // rax
  int v15; // eax
  char *v16; // rax
  __int128 *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  _DWORD v21[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v22; // [rsp+40h] [rbp-21h]
  __int128 v23; // [rsp+48h] [rbp-19h]
  __int64 v24; // [rsp+58h] [rbp-9h]
  int v25; // [rsp+60h] [rbp-1h]
  int v26; // [rsp+64h] [rbp+3h]
  int v27; // [rsp+68h] [rbp+7h]
  int v28; // [rsp+6Ch] [rbp+Bh]
  int v29; // [rsp+70h] [rbp+Fh]
  int v30; // [rsp+74h] [rbp+13h]
  __int64 v31; // [rsp+78h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = -1073741637;
  v6 = *(_QWORD *)(v2 + 40);
  IsPostDevice = DpiFdoIsPostDevice(a1);
  v9 = &xmmword_14015E008;
  if ( !IsPostDevice )
    v9 = &xmmword_14015E0B0;
  if ( g_OSTestSigningEnabled && *(_BYTE *)(v2 + 2716) && !IsPostDevice && DpiFdoIsMsBddAnchoredDevice(v7) )
  {
    ContiguousMemory = BaseAddress;
    if ( BaseAddress
      || (ContiguousMemory = MmAllocateContiguousMemory(0x300000uLL, (PHYSICAL_ADDRESS)-1LL),
          (BaseAddress = ContiguousMemory) != 0LL) )
    {
      *(_DWORD *)v9 = 1024;
      *(_QWORD *)((char *)&xmmword_14015E0B0 + 4) = 0x100000000300LL;
      HIDWORD(xmmword_14015E0B0) = 22;
      *(PHYSICAL_ADDRESS *)&xmmword_14015E0C0 = MmGetPhysicalAddress(ContiguousMemory);
      DWORD2(xmmword_14015E0C0) = dword_14015E154;
      DpiDxgkDdiStopDevice(v6, *(_QWORD *)(v2 + 48));
      v5 = 0;
    }
  }
  else
  {
    v13 = *(_BYTE *)(v2 + 4040);
    if ( (v13 & 4) != 0 )
    {
      *(_BYTE *)(v2 + 4040) = v13 & 0xFB;
      if ( *(_DWORD *)(v6 + 136) >= 0x3003u )
      {
        if ( *(_QWORD *)(v6 + 736) )
        {
          v14 = (char *)&xmmword_14015E018 + 12;
          if ( !IsPostDevice )
            v14 = (char *)&xmmword_14015E0C0 + 12;
          *(_DWORD *)v14 = 0;
          v15 = DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership(
                  v6,
                  *(_QWORD *)(v2 + 48),
                  (unsigned int)dword_14015E154,
                  v9);
          v5 = v15;
          if ( v15 < 0 )
          {
            WdLogSingleEntry1(2LL, v15);
            WdLogGlobalForLineNumber = 13072;
            v11 = (char *)&xmmword_14015E018 + 8;
            if ( !IsPostDevice )
              v11 = (char *)&xmmword_14015E0C0 + 8;
            goto LABEL_13;
          }
          if ( *(_DWORD *)v9 )
          {
            if ( *(_BYTE *)(v2 + 1153) )
              goto LABEL_10;
            dword_14015E19C = 2;
            v11 = (char *)&xmmword_14015E018 + 8;
          }
          else
          {
            WdLogSingleEntry1(4LL, v6);
            WdLogGlobalForLineNumber = 13084;
            v11 = (char *)&xmmword_14015E018 + 8;
            v16 = (char *)&xmmword_14015E018 + 8;
            if ( !IsPostDevice )
              v16 = (char *)&xmmword_14015E0C0 + 8;
            *(_DWORD *)v16 = -3;
            dword_14015E19C = 0;
          }
          if ( !IsPostDevice )
            v11 = (char *)&xmmword_14015E0C0 + 8;
          goto LABEL_32;
        }
      }
    }
  }
LABEL_10:
  v11 = (char *)&xmmword_14015E018 + 8;
  if ( !IsPostDevice )
    v11 = (char *)&xmmword_14015E0C0 + 8;
  if ( v5 < 0 )
  {
LABEL_13:
    *v9 = 0LL;
    v9[1] = 0LL;
    *(_DWORD *)v11 = -1;
    v12 = (__int128 *)&unk_14015E028;
    if ( !IsPostDevice )
      v12 = &xmmword_14015E0D0;
    memset(v12, 0, 0x80uLL);
    if ( !*(_BYTE *)(v2 + 1153) )
      dword_14015E19C = 0;
    goto LABEL_38;
  }
LABEL_32:
  if ( *(_DWORD *)v11 != dword_14015E154 )
  {
    v17 = (__int128 *)&unk_14015E028;
    if ( !IsPostDevice )
      v17 = &xmmword_14015E0D0;
    memset(v17, 0, 0x80uLL);
  }
LABEL_38:
  if ( DpiFdoIsPostDevice(qword_14015E0A8) )
  {
    *((_OWORD *)&DpGlobals + 55) = *(_OWORD *)((char *)&DpGlobals + 712);
    *((_OWORD *)&DpGlobals + 56) = *(_OWORD *)((char *)&DpGlobals + 728);
    *((_OWORD *)&DpGlobals + 57) = *(_OWORD *)((char *)&DpGlobals + 744);
    *((_OWORD *)&DpGlobals + 58) = *(_OWORD *)((char *)&DpGlobals + 760);
    *((_OWORD *)&DpGlobals + 59) = *(_OWORD *)((char *)&DpGlobals + 776);
    *((_OWORD *)&DpGlobals + 60) = *(_OWORD *)((char *)&DpGlobals + 792);
    *((_OWORD *)&DpGlobals + 61) = *(_OWORD *)((char *)&DpGlobals + 808);
    *((_OWORD *)&DpGlobals + 62) = *(_OWORD *)((char *)&DpGlobals + 824);
    *((_OWORD *)&DpGlobals + 63) = *(_OWORD *)((char *)&DpGlobals + 840);
    *((_OWORD *)&DpGlobals + 64) = *(_OWORD *)((char *)&DpGlobals + 856);
  }
  if ( DpiFdoIsMsBddAnchoredDevice(a1) )
    dword_14015E150 = 2;
  v22 = v18;
  v23 = 0LL;
  v26 = v18;
  v19 = *(_QWORD *)(v2 + 2696);
  v22 = 0LL;
  v31 = v19;
  v21[0] = 30;
  v21[1] = 72;
  v25 = v18;
  v24 = v18;
  v23 = 0LL;
  v27 = 98;
  v28 = a2;
  v29 = v5;
  v30 = v18;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v21, *(_QWORD *)(v2 + 5888));
  return (unsigned int)v5;
}

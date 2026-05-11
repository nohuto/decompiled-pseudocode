/*
 * XREFs of PinBuildDescriptors @ 0x140040058
 * Callers:
 *     FilterCreateFilterContext @ 0x1400304D0 (FilterCreateFilterContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 *     PinGetDataFlow @ 0x14002E39C (PinGetDataFlow.c)
 *     PinConflictingFormats @ 0x140030930 (PinConflictingFormats.c)
 *     PinGetCategoryForBridgePin @ 0x1400309A0 (PinGetCategoryForBridgePin.c)
 *     PinGetTerminalUnit @ 0x140040670 (PinGetTerminalUnit.c)
 */

__int64 __fastcall PinBuildDescriptors(__int64 a1, char **a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // ebx
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  __int64 v7; // r13
  unsigned int v8; // edi
  __int64 *v9; // rax
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // r14
  unsigned int v13; // esi
  int v14; // eax
  signed int DataFlow; // ebx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned int v19; // r9d
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  unsigned __int64 v24; // rdi
  unsigned int v25; // eax
  char *Pool2; // rsi
  __int64 v27; // r8
  char *v28; // r9
  char *v29; // r11
  __int64 v30; // r14
  __int64 v31; // r12
  char *v32; // rdi
  char *v33; // rsi
  __int64 TerminalUnit; // rax
  __int64 v35; // rdx
  _QWORD *v36; // r9
  __int64 v37; // r10
  bool v38; // r13
  unsigned __int64 v39; // r9
  char *v40; // rcx
  char *v41; // rcx
  bool v42; // al
  __int64 v43; // rdx
  _DWORD *v44; // r11
  bool v45; // zf
  int v46; // edx
  __int64 v47; // r8
  const GUID *v48; // r9
  int v49; // r10d
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // r15d
  unsigned int v53; // edi
  __int64 v54; // r12
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // r9
  char v61; // r10
  __int64 v62; // r11
  char v63; // dl
  int v64; // eax
  _UNKNOWN **v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r11
  unsigned int v69; // [rsp+50h] [rbp-39h] BYREF
  int v70; // [rsp+54h] [rbp-35h] BYREF
  char *v71; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v72; // [rsp+60h] [rbp-29h] BYREF
  char *v73; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v74; // [rsp+70h] [rbp-19h]
  __int64 v75; // [rsp+78h] [rbp-11h]
  char *v76; // [rsp+80h] [rbp-9h]
  char *v77; // [rsp+88h] [rbp-1h]
  char *v78; // [rsp+90h] [rbp+7h]
  __int64 v79; // [rsp+98h] [rbp+Fh]
  unsigned int v82; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v83; // [rsp+108h] [rbp+7Fh] BYREF

  v79 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v70 = 0;
  v5 = 0;
  v82 = 0;
  v6 = 0;
  v7 = v79 + 80;
  v69 = 0;
  v83 = 0;
  v8 = 0;
  v9 = *(__int64 **)(v79 + 80);
  v10 = 0;
  v75 = v79 + 80;
  v11 = 0;
  v74 = 0;
  if ( v9 != (__int64 *)(v79 + 80) )
  {
    do
    {
      if ( *((_DWORD *)v9 + 5) <= 1u )
      {
        if ( *((_BYTE *)v9 + 72) )
          ++v10;
        else
          ++v11;
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != (__int64 *)v7 );
    v74 = v11;
  }
  v12 = v11 + v10;
  v13 = 0;
  *a3 = v12;
  *a4 = 176;
  if ( v10 )
  {
    do
    {
      LODWORD(v73) = 0;
      LODWORD(v71) = 0;
      LODWORD(v72) = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, int *, char **, char **, unsigned __int64 *))(pExtBusDeviceDispatchTable + 72))(
              a1,
              v13,
              0LL,
              0LL,
              0LL,
              &v70,
              &v73,
              &v71,
              &v72);
      v5 = v82;
      v6 = v69;
      DataFlow = v14;
      v8 = v83;
      if ( v14 >= 0 )
      {
        v5 = (_DWORD)v73 + v82;
        v6 = (_DWORD)v71 + v69;
        v8 = v72 + v83;
        v83 += v72;
        v82 += (unsigned int)v73;
        v69 += (unsigned int)v71;
      }
      ++v13;
    }
    while ( v13 < v10 );
    v7 = v75;
    if ( v14 < 0 )
      return (unsigned int)DataFlow;
    v4 = v70;
  }
  v16 = 336 * v12;
  v17 = -1;
  if ( (unsigned __int64)(336 * v12) > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v18 = v5 * (unsigned __int64)(unsigned int)(v4 + 8);
  if ( v18 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v19 = v16 + v18;
  if ( v16 + (unsigned int)v18 < v16 )
    return (unsigned int)-1073741670;
  v20 = 8LL * v6;
  if ( v20 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v21 = v19 + v20;
  if ( v19 + (unsigned int)v20 < v19 )
    return (unsigned int)-1073741670;
  v22 = 16LL * v8;
  if ( v22 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v23 = v21 + v22;
  if ( v21 + (unsigned int)v22 < v21 )
    return (unsigned int)-1073741670;
  v24 = 16LL * v11;
  if ( v24 > 0xFFFFFFFF )
    return (unsigned int)-1073741670;
  v25 = v23 + v24;
  if ( v23 + (unsigned int)v24 >= v23 )
    v17 = v23 + v24;
  DataFlow = v25 < v23 ? 0xC0000095 : 0;
  if ( v25 < v23 )
    return (unsigned int)-1073741670;
  Pool2 = (char *)ExAllocatePool2(64LL, v17, 1096972357LL);
  v78 = Pool2;
  if ( (*a2 = Pool2) == 0LL )
    return (unsigned int)-1073741670;
  v28 = &Pool2[176 * v12];
  v29 = &v28[160 * v12];
  v77 = v28;
  v30 = 0LL;
  v76 = v29;
  v31 = (__int64)&v29[16 * v83 + v24];
  v71 = &v29[v24];
  v72 = v31 + 8 * (v82 + (unsigned __int64)v69);
  if ( v10 )
  {
    v28 += 8;
    v32 = Pool2 + 32;
    v33 = v77;
    v73 = v28;
    do
    {
      if ( DataFlow < 0 )
        break;
      TerminalUnit = PinGetTerminalUnit(v7, (unsigned int)v30, v27, v28);
      v38 = TerminalUnit && *(_DWORD *)(TerminalUnit + 68) == 257 && *(_DWORD *)(TerminalUnit + 76) == 2;
      *((_QWORD *)v32 - 4) = &PinDispatch;
      if ( v38 )
      {
        *((_QWORD *)v32 - 3) = 0LL;
      }
      else
      {
        *((_QWORD *)v32 - 3) = &v33[48 * v30];
        *((_DWORD *)v36 - 2) = 5;
        *((_DWORD *)v36 - 1) = 72;
        *v36 = &off_14001E540;
      }
      v39 = v72;
      *((_QWORD *)v32 - 1) = &PinInterface;
      *((_DWORD *)v32 - 4) = 1;
      *(_DWORD *)v32 = 1;
      *((_QWORD *)v32 + 1) = &PinMedium;
      DataFlow = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64, __int64, int *, unsigned int *, unsigned int *, unsigned int *))(pExtBusDeviceDispatchTable + 72))(
                   a1,
                   v35,
                   v31,
                   v39,
                   v37,
                   &v70,
                   &v82,
                   &v69,
                   &v83);
      if ( DataFlow >= 0 )
      {
        v40 = v71;
        *((_QWORD *)v32 + 17) = v71;
        *((_DWORD *)v32 + 32) = v83;
        v41 = &v40[16 * v83];
        *((_DWORD *)v32 + 4) = v82 + v69;
        *((_QWORD *)v32 + 3) = v31;
        v71 = v41;
        if ( v82 <= 1 )
        {
          v32[116] = 0;
          *((_DWORD *)v32 + 19) = 1;
          *((_DWORD *)v32 + 26) = 1;
        }
        else
        {
          *((_DWORD *)v32 + 26) = 1;
          v42 = PinConflictingFormats((__int64)(v32 - 16));
          v32[116] = v42;
          *((_DWORD *)v32 + 19) = v42 + 1;
        }
        *((_DWORD *)v32 + 20) = 0;
        *((_DWORD *)v32 + 27) = 0;
        v31 += 8LL * (v82 + v69);
        v72 += v70 * v82;
        DataFlow = PinGetDataFlow(v75, (unsigned int)v30, (__int64)(v32 + 32));
        if ( DataFlow >= 0 )
        {
          if ( v38 )
          {
            *((_QWORD *)v32 + 12) = PinMIDIDataFormatIntersection;
            v45 = *v44 == 1;
            *((_QWORD *)v32 + 5) = &KSCATEGORY_WDMAUD_USE_PIN_NAME;
            if ( v45 )
            {
              v46 = 2162690;
              v27 = 1LL;
            }
            else
            {
              v46 = 10;
              v27 = 3LL;
            }
            *((_DWORD *)v32 + 9) = v27;
            *((_DWORD *)v32 + 18) = v46;
          }
          else
          {
            *((_QWORD *)v32 + 12) = PinDataFormatIntersection;
            if ( *v44 == 1 )
            {
              v47 = 2162690LL;
              v48 = &KSCATEGORY_AUDIO;
              v49 = 1;
            }
            else
            {
              v47 = 65538LL;
              v48 = &PINNAME_VIDEO_CAPTURE;
              v49 = 3;
            }
            v50 = v75;
            DataFlow = -1073741275;
            *((_DWORD *)v32 + 9) = v49;
            *((_QWORD *)v32 + 5) = v48;
            *((_DWORD *)v32 + 18) = v47;
            v51 = PinGetTerminalUnit(v50, v43, v47, v48);
            if ( v51 )
            {
              DataFlow = 0;
              *((_DWORD *)v32 + 28) = *(_DWORD *)(v51 + 28);
            }
          }
          *((_QWORD *)v32 + 11) = &AllocatorFraming;
        }
      }
      v30 = (unsigned int)(v30 + 1);
      v7 = v75;
      v28 = v73 + 48;
      v32 += 176;
      v73 += 48;
    }
    while ( (unsigned int)v30 < v10 );
    Pool2 = v78;
  }
  v52 = v74;
  v53 = 0;
  if ( v74 )
  {
    v54 = v79;
    while ( DataFlow >= 0 )
    {
      PinGetTerminalUnit(v7, (unsigned int)v30, v27, v28);
      v55 = 176LL * (unsigned int)v30;
      *(_QWORD *)&Pool2[v55 + 136] = 0LL;
      v59 = PinGetTerminalUnit(v57, v56, v58, v55);
      v63 = 0;
      if ( v59 )
      {
        if ( *(_DWORD *)(v59 + 20) == 1 )
        {
          v64 = *(_DWORD *)(v59 + 68) - 1538;
          if ( !v64 || v64 == 3 )
            v63 = 1;
        }
      }
      Pool2[v60 + 149] = v63;
      *(_QWORD *)&Pool2[v60] = 0LL;
      *(_QWORD *)&Pool2[v60 + 8] = 0LL;
      *(_QWORD *)&Pool2[v60 + 108] = 0LL;
      *(_QWORD *)&Pool2[v60 + 24] = &PinInterface;
      *(_DWORD *)&Pool2[v60 + 16] = 1;
      *(_QWORD *)&Pool2[v60 + 40] = &PinMedium;
      v65 = &pMIDIBridgePinFormats;
      if ( !v61 )
        v65 = &pAudioBridgePinFormats;
      *(_DWORD *)&Pool2[v60 + 32] = 1;
      *(_QWORD *)&Pool2[v60 + 56] = v65;
      *(_DWORD *)&Pool2[v60 + 48] = 1;
      *(_QWORD *)&Pool2[v60 + 72] = 16LL * v53 + v62;
      *(_DWORD *)&Pool2[v60 + 68] = 4;
      DataFlow = PinGetDataFlow(v7, (unsigned int)v30, (__int64)&Pool2[v60 + 64]);
      if ( DataFlow >= 0 )
        PinGetCategoryForBridgePin(v54, v66, v67);
      ++v53;
      LODWORD(v30) = v30 + 1;
      if ( v53 >= v52 )
        goto LABEL_68;
    }
    goto LABEL_70;
  }
LABEL_68:
  if ( DataFlow < 0 || (DataFlow = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Pool2, ExFreePool), DataFlow < 0) )
LABEL_70:
    ExFreePool(Pool2);
  return (unsigned int)DataFlow;
}

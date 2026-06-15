/*
 * XREFs of ?GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4PeriodicityType@@PEAI555@Z @ 0x1800404B0
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003FDC4 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180040390 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAud.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800ABC2C (memcmp_0.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSharedModeEnginePeriodicityForTranslatedProcessingMode(
        __int64 a1,
        int a2,
        unsigned __int16 *a3,
        _QWORD *a4,
        __int64 *a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  __int64 v10; // r10
  unsigned __int16 *v11; // r14
  __int64 v12; // r10
  int v13; // edx
  int v14; // r11d
  __int64 v15; // rbx
  __int64 v16; // rax
  GUID v17; // xmm0
  _QWORD *v18; // rdi
  _QWORD *v19; // r13
  _QWORD *v20; // rcx
  __int64 v21; // rax
  unsigned __int16 ***v22; // rbx
  unsigned __int16 ***v23; // rsi
  unsigned __int16 *v24; // rcx
  int v25; // r8d
  unsigned __int16 v26; // dx
  int v27; // eax
  __int16 v28; // r12
  __int128 v29; // xmm1
  __int64 v30; // xmm0_8
  int v31; // r9d
  __int16 v32; // r14
  int v33; // r8d
  int v34; // eax
  unsigned __int16 v35; // dx
  __int16 v36; // r15
  __int128 v37; // xmm1
  __int64 v38; // xmm0_8
  int v39; // eax
  __int16 v40; // r11
  __int16 v41; // r8
  int v42; // edx
  __int16 v43; // cx
  __int64 v44; // rax
  unsigned __int16 v46; // dx
  unsigned __int16 **v47; // rax
  int v48; // eax
  int v49; // ecx
  __int64 v50; // rax
  unsigned __int16 v51; // dx
  __int128 v52; // xmm0
  __int128 v53; // xmm0
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  _BYTE Buf2[40]; // [rsp+48h] [rbp-81h] BYREF
  _OWORD Buf1[3]; // [rsp+70h] [rbp-59h] BYREF
  GUID v61; // [rsp+A0h] [rbp-29h]

  v10 = 296LL;
  v11 = a3;
  if ( a2 != 3 )
    v10 = 272LL;
  v12 = a1 + v10;
  v13 = 0;
  v14 = *((_DWORD *)a5 + 4);
  while ( 1 )
  {
    if ( v13 >= v14 )
      goto LABEL_9;
    v15 = *a5;
    v16 = *(_QWORD *)(*a5 + 16LL * v13) - *a4;
    if ( !v16 )
      v16 = *(_QWORD *)(v15 + 16LL * v13 + 8) - a4[1];
    if ( !v16 )
      break;
    ++v13;
  }
  if ( v13 == -1 )
  {
LABEL_9:
    v17 = *(GUID *)a4;
    goto LABEL_10;
  }
  v49 = 0;
  v61 = *(GUID *)a4;
  while ( 1 )
  {
    if ( v49 >= v14 )
      goto LABEL_91;
    v50 = *(_QWORD *)(v15 + 16LL * v49) - *(_QWORD *)&v61.Data1;
    if ( !v50 )
      v50 = *(_QWORD *)(v15 + 16LL * v49 + 8) - *(_QWORD *)v61.Data4;
    if ( !v50 )
      break;
    ++v49;
  }
  if ( v49 == -1 )
  {
LABEL_91:
    v17 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_10;
  }
  if ( v49 < 0 )
  {
    ATL::_AtlRaiseException(0xC000008C, 2 * v49);
    __debugbreak();
  }
  v17 = *(GUID *)(a5[1] + 16LL * v49);
LABEL_10:
  v18 = *(_QWORD **)v12;
  v61 = v17;
  v19 = *(_QWORD **)(v12 + 8);
  while ( v18 != v19 )
  {
    v20 = (_QWORD *)*v18;
    v21 = *(_QWORD *)*v18 - *(_QWORD *)&v61.Data1;
    if ( !v21 )
      v21 = v20[1] - *(_QWORD *)v61.Data4;
    if ( !v21 )
    {
      v22 = (unsigned __int16 ***)v20[2];
      v23 = (unsigned __int16 ***)v20[3];
      while ( 1 )
      {
        if ( v22 == v23 )
          goto LABEL_54;
        v24 = **v22;
        if ( !v11 )
        {
          if ( !v24 )
            goto LABEL_60;
          goto LABEL_53;
        }
        if ( !v24 )
          goto LABEL_53;
        v25 = *v11;
        v26 = v11[8];
        v27 = 0;
        memset(Buf1, 0, 40);
        memset(Buf2, 0, sizeof(Buf2));
        if ( (_WORD)v25 == 0xFFFE )
          break;
        if ( v26 && (((_WORD)v25 - 1) & 0xFFFD) != 0 )
          goto LABEL_53;
        v46 = v11[1];
        if ( (unsigned __int16)(v46 - 1) > 1u )
          goto LABEL_53;
        if ( ((v11[7] - 8) & 0xFFE7) != 0 )
        {
          ++v22;
        }
        else
        {
          v52 = *(_OWORD *)v11;
          WORD1(Buf1[1]) = v11[7];
          LOWORD(Buf1[1]) = 22;
          v32 = -2;
          Buf1[0] = v52;
          LOWORD(Buf1[0]) = -2;
          v31 = (v46 == 1) + 3;
          *(GUID *)((char *)&Buf1[1] + 8) = GUID_00000000_0000_0010_8000_00aa00389b71;
          v28 = 22;
          DWORD2(Buf1[1]) = v25;
LABEL_24:
          v33 = *v24;
          v34 = 0;
          v35 = v24[8];
          if ( (_WORD)v33 == 0xFFFE )
          {
            if ( v35 == 22 )
              goto LABEL_26;
            v56 = *((_QWORD *)v24 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
            if ( !v56 )
              v56 = *((_QWORD *)v24 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
            if ( !v56 )
              goto LABEL_26;
            v57 = *((_QWORD *)v24 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v57 )
              v57 = *((_QWORD *)v24 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( v57 )
            {
              v36 = *(_WORD *)&Buf2[16];
            }
            else
            {
LABEL_26:
              v36 = 22;
              v34 = 1;
              v37 = *((_OWORD *)v24 + 1);
              *(_OWORD *)Buf2 = *(_OWORD *)v24;
              v38 = *((_QWORD *)v24 + 4);
              *(_OWORD *)&Buf2[16] = v37;
              *(_WORD *)&Buf2[16] = 22;
              *(_QWORD *)&Buf2[32] = v38;
            }
            if ( !v34 )
            {
              v11 = a3;
              goto LABEL_53;
            }
            v39 = *(_DWORD *)&Buf2[20];
            v40 = *(_WORD *)Buf2;
LABEL_29:
            if ( WORD1(Buf1[0]) )
            {
              v41 = *(_WORD *)&Buf2[2];
            }
            else
            {
              v41 = 0;
              *(_WORD *)&Buf2[2] = 0;
              *(_DWORD *)&Buf2[8] = 0;
              *(_WORD *)&Buf2[12] = 0;
            }
            if ( DWORD1(Buf1[0]) )
            {
              v42 = *(_DWORD *)&Buf2[4];
            }
            else
            {
              v42 = 0;
              *(_QWORD *)&Buf2[4] = 0LL;
            }
            if ( HIWORD(Buf1[0]) )
            {
              v43 = *(_WORD *)&Buf2[14];
            }
            else
            {
              v43 = 0;
              *(_DWORD *)&Buf2[12] = 0;
            }
            if ( !v31 )
              v39 = 0;
            *(_DWORD *)&Buf2[20] = v39;
            if ( !v32 )
            {
              v40 = 0;
              *(_WORD *)Buf2 = 0;
            }
            if ( !v41 )
            {
              WORD1(Buf1[0]) = 0;
              DWORD2(Buf1[0]) = 0;
              WORD6(Buf1[0]) = 0;
            }
            if ( !v42 )
              *(_QWORD *)((char *)Buf1 + 4) = 0LL;
            if ( !v43 )
              HIDWORD(Buf1[0]) = 0;
            if ( !v39 )
              v31 = 0;
            DWORD1(Buf1[1]) = v31;
            if ( !v40 )
              LOWORD(Buf1[0]) = 0;
            v44 = *((_QWORD *)&Buf1[1] + 1) - *(_QWORD *)&Buf2[24];
            if ( *((_QWORD *)&Buf1[1] + 1) == *(_QWORD *)&Buf2[24] )
              v44 = *(_QWORD *)&Buf1[2] - *(_QWORD *)&Buf2[32];
            if ( !v44 && v36 == v28 && !memcmp_0(Buf1, Buf2, 0x28uLL) )
            {
LABEL_60:
              if ( a7 )
                *a7 = *((_DWORD *)*v22 + 3);
              if ( a8 )
                *a8 = *((_DWORD *)*v22 + 2);
              if ( a9 )
                *a9 = *((_DWORD *)*v22 + 4);
              if ( a10 )
              {
                v47 = *v22;
                if ( a6 )
                  v48 = *((_DWORD *)v47 + 6);
                else
                  v48 = *((_DWORD *)v47 + 5);
                *a10 = v48;
              }
              return 0LL;
            }
            v11 = a3;
LABEL_53:
            ++v22;
          }
          else
          {
            if ( !v35 || (((_WORD)v33 - 1) & 0xFFFD) == 0 )
            {
              v51 = v24[1];
              if ( (unsigned __int16)(v51 - 1) > 1u )
              {
                v11 = a3;
                goto LABEL_53;
              }
              v40 = -2;
              if ( ((v24[7] - 8) & 0xFFE7) != 0 )
              {
                v11 = a3;
                goto LABEL_53;
              }
              v53 = *(_OWORD *)v24;
              *(_WORD *)&Buf2[18] = v24[7];
              v36 = 22;
              *(_WORD *)&Buf2[16] = 22;
              *(_OWORD *)Buf2 = v53;
              *(_WORD *)Buf2 = -2;
              *(GUID *)&Buf2[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
              v39 = (v51 == 1) + 3;
              *(_DWORD *)&Buf2[24] = v33;
              goto LABEL_29;
            }
            v11 = a3;
            ++v22;
          }
        }
      }
      if ( v26 == 22 )
        goto LABEL_21;
      v54 = *((_QWORD *)v11 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v54 )
        v54 = *((_QWORD *)v11 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( !v54 )
        goto LABEL_21;
      v55 = *((_QWORD *)v11 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v55 )
        v55 = *((_QWORD *)v11 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v55 )
      {
        v28 = Buf1[1];
      }
      else
      {
LABEL_21:
        v28 = 22;
        v27 = 1;
        v29 = *((_OWORD *)v11 + 1);
        Buf1[0] = *(_OWORD *)v11;
        v30 = *((_QWORD *)v11 + 4);
        Buf1[1] = v29;
        LOWORD(Buf1[1]) = 22;
        *(_QWORD *)&Buf1[2] = v30;
      }
      if ( !v27 )
        goto LABEL_53;
      v31 = DWORD1(Buf1[1]);
      v32 = Buf1[0];
      goto LABEL_24;
    }
LABEL_54:
    ++v18;
  }
  return 2290679816LL;
}

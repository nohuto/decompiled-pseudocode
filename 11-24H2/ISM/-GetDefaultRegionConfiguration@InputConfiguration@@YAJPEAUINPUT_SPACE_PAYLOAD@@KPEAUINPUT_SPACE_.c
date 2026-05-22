/*
 * XREFs of ?GetDefaultRegionConfiguration@InputConfiguration@@YAJPEAUINPUT_SPACE_PAYLOAD@@KPEAUINPUT_SPACE_REGION@@@Z @ 0x1801097D0
 * Callers:
 *     ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z @ 0x1801B8D08 (-UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUInputConfigContextMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InputConfiguration::GetDefaultRegionConfiguration(
        InputConfiguration *this,
        struct INPUT_SPACE_PAYLOAD *a2,
        _OWORD *a3,
        struct INPUT_SPACE_REGION *a4)
{
  _OWORD *v4; // r9
  _QWORD *v5; // rcx
  __int64 v6; // r11
  unsigned int i; // edx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *v14; // r8
  __int128 v15; // xmm0
  _OWORD *v16; // r9
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  if ( !(_DWORD)a2 )
    goto LABEL_13;
  v5 = (_QWORD *)((char *)this + 16);
  v6 = (unsigned int)a2;
  do
  {
    for ( i = 0; i < *((_DWORD *)v5 - 1); ++i )
    {
      if ( (*(_BYTE *)(v5 - 1) & 1) != 0 && (*(_BYTE *)(*v5 + 200LL * i + 16) & 1) != 0 && !v4 )
      {
        v4 = (_OWORD *)(*v5 + 200LL * i);
        break;
      }
    }
    v5 += 3;
    --v6;
  }
  while ( v6 );
  if ( v4 )
  {
    v8 = v4[1];
    *a3 = *v4;
    v9 = v4[2];
    a3[1] = v8;
    v10 = v4[3];
    a3[2] = v9;
    v11 = v4[4];
    a3[3] = v10;
    v12 = v4[5];
    a3[4] = v11;
    v13 = v4[6];
    a3[5] = v12;
    a3[6] = v13;
    v14 = a3 + 8;
    v15 = v4[7];
    v16 = v4 + 8;
    *(v14 - 1) = v15;
    v17 = *((_QWORD *)v16 + 8);
    v18 = v16[1];
    *v14 = *v16;
    v19 = v16[2];
    v14[1] = v18;
    v20 = v16[3];
    v14[2] = v19;
    v14[3] = v20;
    *((_QWORD *)v14 + 8) = v17;
    return 0LL;
  }
  else
  {
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}

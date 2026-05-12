/*
 * XREFs of RaidGetStartIoPerfParams @ 0x140025BD0
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidGetStartIoPerfParams(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // eax
  __int64 v6; // rbp
  int v7; // ebx
  int v8; // edx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rdx

  if ( !a1 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 19LL;
    goto LABEL_36;
  }
  if ( !a2 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 20LL;
    goto LABEL_36;
  }
  if ( !a3 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 21LL;
    goto LABEL_36;
  }
  v5 = a3[1];
  if ( v5 < 0x10 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 22LL;
LABEL_36:
    WPP_SF_(v10->AttachedDevice, v11, &WPP_fe6d764451ce35c6dcc82ee897ab329f_Traceguids);
    return 3238002694LL;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(_QWORD *)(a2 + 96);
  else
    v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 20);
    memset_0(a3 + 2, 0, v5 - 8);
    if ( a3[1] >= 0x14u && *a3 == 2 )
      a3[4] = v7;
    else
      *a3 = 1;
    a3[3] = *(_DWORD *)(v6 + 24);
    if ( *(_DWORD *)a1 == 1094997074 )
    {
      if ( (*(_BYTE *)(a1 + 4660) & 2) == 0
        || (unsigned __int16)v7 >= *(_WORD *)(a1 + 4662)
        || (v8 = *(unsigned __int8 *)(BYTE2(v7) + ((unsigned __int16)v7 << 6) + *(_QWORD *)(a1 + 4680)),
            a3[2] = v8,
            v8 == 255) )
      {
        a3[2] = 0;
      }
      return 0LL;
    }
    else
    {
      return 3238002694LL;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_fe6d764451ce35c6dcc82ee897ab329f_Traceguids);
    }
    return 3238002694LL;
  }
}

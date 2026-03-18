/*
 * XREFs of ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x14040B2DC
 * Callers:
 *     ?GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140185C28 (-GetTopologyForClass@CCD_BTL_FULL@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x140182AD4 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x140264B4C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x140265210 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x14026531C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1403690FC (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x140374BE0 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x140400CFC (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::operator()(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        int a2,
        void **a3,
        unsigned __int16 *a4)
{
  unsigned int v5; // esi
  __int64 v6; // r14
  int v8; // eax
  int v9; // ebx
  __m128i *v11; // r15
  unsigned int i; // r12d
  __int64 v13; // rbp
  int v14; // eax
  void **v15; // rcx
  __int64 v16; // rcx
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v22; // ecx
  unsigned int v23; // [rsp+20h] [rbp-68h] BYREF
  __m128i si128; // [rsp+28h] [rbp-60h] BYREF
  int v25; // [rsp+38h] [rbp-50h]

  *(_QWORD *)this = a3;
  v5 = 0;
  v6 = a2;
  *((_DWORD *)this + 2) = 0;
  CCD_TOPOLOGY::Clear(a3);
  v8 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 12));
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry3(2LL, v8, v6, *(_QWORD *)this);
    WdLogGlobalForLineNumber = 335;
    return (unsigned int)v9;
  }
  v11 = &si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v25 = 8;
  v9 = -1073741811;
  v23 = 0;
  for ( i = 0; i < 5; ++i )
  {
    v13 = v11->m128i_i32[0];
    if ( ((unsigned int)v13 & (unsigned int)v6) != (_DWORD)v13 )
      goto LABEL_20;
    switch ( (_DWORD)v13 )
    {
      case 1:
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
LABEL_17:
        v9 = v14;
        if ( v14 >= 0 )
          goto LABEL_23;
        goto LABEL_18;
      case 2:
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 1);
        goto LABEL_17;
      case 4:
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 1);
        goto LABEL_17;
      case 8:
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
        goto LABEL_17;
      case 0xF:
        v14 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(this, &v23);
        v5 = v23;
        goto LABEL_17;
    }
    v9 = -1073741811;
LABEL_18:
    if ( (_DWORD)v13 == 15 )
      goto LABEL_22;
    v15 = *(void ***)this;
    *((_DWORD *)this + 2) = 0;
    CCD_TOPOLOGY::Clear(v15);
    v5 = 0;
    v23 = 0;
    WdLogSingleEntry3(3LL, v9, v13, *(_QWORD *)this);
    WdLogGlobalForLineNumber = 416;
LABEL_20:
    v11 = (__m128i *)((char *)v11 + 4);
  }
  if ( v9 < 0 )
  {
LABEL_22:
    WdLogSingleEntry3(2LL, v9, v6, *(_QWORD *)this);
    WdLogGlobalForLineNumber = 425;
    return (unsigned int)v9;
  }
LABEL_23:
  v16 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v16 )
    v17 = *(_WORD *)(v16 + 22);
  else
    v17 = 0;
  v18 = *((_WORD *)this + 4);
  if ( v18 <= v17 )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
      if ( v5 >= v20 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, v5);
      v22 = v5;
      if ( *((_BYTE *)this + 11) )
        v22 = 0;
      *((_DWORD *)PathDescriptor + 46) = v22 | 0xFE530000;
      *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
      ++v5;
    }
  }
  else
  {
    if ( a4 )
      *a4 = v18;
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v9;
}

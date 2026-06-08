/*
 * XREFs of GetCppcRequestMsrPerfControlHandler @ 0x140022BB0
 * Callers:
 *     <none>
 * Callees:
 *     IsFastCppcSupported @ 0x14000424C (IsFastCppcSupported.c)
 */

__int64 __fastcall GetCppcRequestMsrPerfControlHandler(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _BYTE *a7,
        _BYTE *a8,
        bool *a9,
        _DWORD *a10)
{
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned int v13; // ebx
  void *v14; // rax
  __int64 v15; // rax
  bool v16; // cl

  v10 = *(_QWORD *)(a2 + 144);
  v11 = 0LL;
  v12 = 0LL;
  v13 = -1073741637;
  if ( *(_BYTE *)(a2 + 125) )
  {
    if ( *(_BYTE *)(v10 + 128) != 127 || *(_BYTE *)(v10 + 129) != 8 || *(_BYTE *)(v10 + 130) != 16 )
      return v13;
    v11 = *(_QWORD *)(v10 + 132);
    v12 = 16711680LL;
  }
  if ( *(_BYTE *)(a2 + 126) )
  {
    if ( *(_BYTE *)(v10 + 152) != 127 || *(_BYTE *)(v10 + 153) != 8 || *(_BYTE *)(v10 + 154) != 8 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 156) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 156);
    }
    v12 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a2 + 127) )
  {
    if ( *(_BYTE *)(v10 + 176) != 127 || *(_BYTE *)(v10 + 177) != 8 || *(_BYTE *)(v10 + 178) )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 180) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 180);
    }
    v12 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a2 + 128) )
  {
    if ( *(_BYTE *)(v10 + 416) != 127 || *(_BYTE *)(v10 + 417) != 8 || *(_BYTE *)(v10 + 418) != 24 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 420) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 420);
    }
    v12 |= 0xFF000000uLL;
  }
  if ( !*(_BYTE *)(a2 + 129) && !*(_BYTE *)(a2 + 130) && v11 == 3221291699LL )
  {
    *(_QWORD *)(a2 + 184) = v12;
    *a6 = PerfSelectionCppcRequestMsr;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Eu) )
    {
      *a3 = PerfControlCppcRequestMsrLp;
      *a4 = PerfControlCppcRequestMsrLp;
      *a5 = 0LL;
      *a8 = 1;
      *a7 = 0;
      *a10 = 0;
      *a9 = 0;
    }
    else
    {
      *a3 = PerfControlCppcRequestMsr;
      v14 = PerfControlCppcRequestMsrHidden;
      if ( dword_140014EA8 == 1 )
        v14 = PerfControlCppcRequestMsrHiddenHv;
      *a4 = v14;
      *a5 = 0LL;
      *a7 = 1;
      *a8 = 0;
      v15 = *(_QWORD *)(a1 + 1240);
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 16) > 1u;
      else
        v16 = 0;
      *a9 = v16;
      *a10 = IsFastCppcSupported() ? 100 : 1000;
    }
    return 0;
  }
  return v13;
}

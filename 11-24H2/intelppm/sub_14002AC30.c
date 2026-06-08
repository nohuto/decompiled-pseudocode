/*
 * XREFs of sub_14002AC30 @ 0x14002AC30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007344 @ 0x140007344 (sub_140007344.c)
 *     sub_140007380 @ 0x140007380 (sub_140007380.c)
 *     sub_1400073D4 @ 0x1400073D4 (sub_1400073D4.c)
 *     sub_1400074BC @ 0x1400074BC (sub_1400074BC.c)
 *     sub_140007538 @ 0x140007538 (sub_140007538.c)
 *     sub_14002AFD8 @ 0x14002AFD8 (sub_14002AFD8.c)
 *     sub_14002B054 @ 0x14002B054 (sub_14002B054.c)
 *     sub_14002B0D0 @ 0x14002B0D0 (sub_14002B0D0.c)
 */

__int64 __fastcall sub_14002AC30(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        _QWORD *a6,
        _BYTE *a7,
        _BYTE *a8,
        bool *a9,
        int *a10)
{
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned int v13; // ebx
  void *v14; // rax
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax

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
    if ( *(_BYTE *)(v10 + 152) != 127 || *(_BYTE *)(v10 + 153) != 8 || *(_BYTE *)(v10 + 154) )
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
    v12 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a2 + 127) )
  {
    if ( *(_BYTE *)(v10 + 176) != 127 || *(_BYTE *)(v10 + 177) != 8 || *(_BYTE *)(v10 + 178) != 8 )
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
    v12 |= 0xFF00uLL;
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
  if ( *(_BYTE *)(a2 + 129) )
  {
    if ( *(_BYTE *)(v10 + 392) != 127 || *(_BYTE *)(v10 + 393) != 10 || *(_BYTE *)(v10 + 394) != 32 )
      return v13;
    if ( v11 )
    {
      if ( v11 != *(_QWORD *)(v10 + 396) )
        return v13;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 396);
    }
    v12 |= 0x3FF00000000uLL;
  }
  if ( !*(_BYTE *)(a2 + 130)
    && ((v11 - 1906) & 0xFFFFFFFFFFFFFFFDuLL) == 0
    && (!*(_BYTE *)(a2 + 1348) || *(_BYTE *)(a2 + 1352) == 127 && *(_QWORD *)(a2 + 1356) == 3215LL) )
  {
    *(_QWORD *)(a2 + 184) = v12;
    *a6 = sub_140002CB0;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Eu) )
    {
      *a3 = sub_140007730;
      *a4 = sub_140007730;
      *a5 = 0LL;
      *a8 = 1;
      *a7 = 0;
      *a10 = 0;
      *a9 = 0;
    }
    else
    {
      *a3 = sub_140005C10;
      v14 = sub_140007590;
      if ( dword_140019A60 == 1 )
        v14 = sub_140007650;
      *a4 = v14;
      *a5 = (unsigned __int64)qword_140003E00 & -(__int64)((unsigned __int8)sub_14002B0D0() != 0);
      if ( (unsigned int)sub_1400073D4() )
      {
        if ( (unsigned __int8)sub_14002AFD8() )
          v15 = sub_1400074BC() ? 200 : 500;
        else
          v15 = 1000;
      }
      else
      {
        v15 = (unsigned __int8)sub_14002AFD8() != 0 ? 500 : 1000;
      }
      if ( (unsigned int)sub_140007380() && sub_140007538() )
      {
        v17 = sub_140007344(v16);
        switch ( v17 )
        {
          case 2:
            v15 = 500;
            break;
          case 3:
            v15 = 200;
            break;
          case 4:
            v15 = 100;
            break;
          case 5:
            v15 = 10;
            break;
        }
      }
      *a8 = 0;
      *a7 = 1;
      *a9 = (unsigned __int8)sub_14002B054() == 0;
      *a10 = v15;
    }
    return 0;
  }
  return v13;
}

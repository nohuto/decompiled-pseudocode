/*
 * XREFs of ulGetMatchingIndexFromColorref @ 0x14003BF10
 * Callers:
 *     <none>
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x14003B820 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003CA18 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400D81A0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 */

struct tagPALETTEENTRY __fastcall ulGetMatchingIndexFromColorref(__int64 a1, ULONG_PTR a2, struct tagPALETTEENTRY a3)
{
  __int64 SessionState; // rax
  __int64 v7; // rbp
  struct tagPALETTEENTRY v8; // edx
  struct tagPALETTEENTRY result; // eax
  unsigned int v10; // ebx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR v14; // [rsp+48h] [rbp+10h] BYREF
  struct tagPALETTEENTRY v15; // [rsp+50h] [rbp+18h]

  v14 = a2;
  v13 = a1;
  SessionState = W32GetSessionState(a1);
  v15 = a3;
  v7 = *(_QWORD *)(SessionState + 88);
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 0x800) != 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x3000000) == 0 )
    {
LABEL_9:
      if ( (*(_DWORD *)&a3 & 0x10FF0000) != 0x10FF0000 )
      {
        v15.peFlags = 0;
        result = v15;
        if ( v15 == 0xFFFFFF )
        {
          result = (struct tagPALETTEENTRY)19;
        }
        else
        {
          if ( v15 )
          {
            v13 = *(_QWORD *)(v7 + 3768);
            result = (struct tagPALETTEENTRY)XEPALOBJ::ulGetMatchFromPalentry((XEPALOBJ *)&v13, v15);
          }
          if ( (unsigned int)(*(_DWORD *)&result - 10) > 0xFFFFFFF4 )
            return result;
        }
        *(_DWORD *)&result += 236;
        return result;
      }
      return (struct tagPALETTEENTRY)a3.peRed;
    }
    if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
    {
      v15 = (unsigned int)*(unsigned __int16 *)&a3.peRed < *(_DWORD *)(a2 + 28)
          ? (struct tagPALETTEENTRY)*(unsigned __int16 *)&a3.peRed
          : 0;
      v10 = (unsigned int)v15;
    }
    else
    {
      v11 = *(_DWORD *)(a2 + 96);
      v15.peFlags = 0;
      v10 = XEPALOBJ::ulDispatchGFPEFunction(&v14, v11, *(_DWORD *)&v15);
    }
    if ( (unsigned int)XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v14) )
    {
      result = (struct tagPALETTEENTRY)(v10 + 236);
      if ( v10 < 0xA )
        return (struct tagPALETTEENTRY)v10;
      return result;
    }
    if ( a1 )
    {
      v12 = *(_QWORD *)(a2 + 80);
      if ( !v12 )
      {
LABEL_24:
        a3 = *(struct tagPALETTEENTRY *)(*(_QWORD *)(a2 + 112) + 4LL * v10);
        v15 = a3;
        if ( a3.peFlags == 2 )
          return (struct tagPALETTEENTRY)a3.peRed;
        goto LABEL_9;
      }
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 72);
      if ( !v12 )
        goto LABEL_24;
    }
    return (struct tagPALETTEENTRY)*(unsigned __int8 *)(v10 + v12 + 4);
  }
  if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
  {
    v8 = *(struct tagPALETTEENTRY *)(*(_QWORD *)(a2 + 112)
                                   + 4LL
                                   * (*(unsigned __int16 *)&a3.peRed & (unsigned int)-((unsigned int)*(unsigned __int16 *)&a3.peRed < *(_DWORD *)(a2 + 28))));
  }
  else
  {
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned int)a3.peRed < *(_DWORD *)(a1 + 28) ? (struct tagPALETTEENTRY)a3.peRed : 0;
    v15.peFlags = 0;
    v8 = v15;
  }
  return (struct tagPALETTEENTRY)XEPALOBJ::ulGetMatchFromPalentry((XEPALOBJ *)&v13, v8);
}

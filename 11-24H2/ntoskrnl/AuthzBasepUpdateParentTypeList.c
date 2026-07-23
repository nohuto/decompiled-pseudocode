/*
 * XREFs of AuthzBasepUpdateParentTypeList @ 0x1404ADF00
 * Callers:
 *     AuthzBasepAddAccessTypeList @ 0x140446210 (AuthzBasepAddAccessTypeList.c)
 *     SepMaximumAccessCheck @ 0x1404E8A30 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1404EA720 (SepNormalAccessCheck.c)
 * Callees:
 *     AuthzBasepSetAccessReasons @ 0x14041B4B0 (AuthzBasepSetAccessReasons.c)
 */

unsigned __int64 __fastcall AuthzBasepUpdateParentTypeList(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v6; // rbp
  __int64 v8; // r11
  unsigned __int64 result; // rax
  int v10; // edi
  int v11; // r10d
  int v12; // ebx
  __int64 v13; // rcx
  __int16 v14; // r14
  __int64 v15; // rdx
  int v16; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  unsigned __int16 v20; // cx
  int v21; // ecx
  bool v22; // zf

  LODWORD(v6) = a3;
  v8 = a1;
  while ( 1 )
  {
    result = (unsigned int)v6;
    v10 = 0;
    v11 = -1;
    v12 = 0;
    v13 = 6LL * (unsigned int)v6;
    v6 = *(unsigned int *)(v8 + 48LL * (unsigned int)v6 + 20);
    if ( (_DWORD)v6 == -1 )
      return result;
    v14 = *(_WORD *)(v8 + 8 * v13);
    v15 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v15 < a2 )
    {
      result = v8 + 48 * v15 + 28;
      do
      {
        v20 = *(_WORD *)(result - 28);
        if ( v20 <= *(_WORD *)(v8 + 48 * v6) )
          break;
        if ( v20 == v14 )
        {
          v10 |= *(_DWORD *)(result - 4);
          v11 &= *(_DWORD *)result;
          v12 |= *(_DWORD *)(result + 4);
        }
        LODWORD(v15) = v15 + 1;
        result += 48LL;
      }
      while ( (unsigned int)v15 < a2 );
    }
    v16 = *(_DWORD *)(v8 + 48 * v6 + 24);
    if ( v10 == v16 && v11 == *(_DWORD *)(v8 + 48 * v6 + 28) && v12 == *(_DWORD *)(v8 + 48 * v6 + 32) )
      return result;
    switch ( a5 )
    {
      case 0:
        *(_DWORD *)(v8 + 48 * v6 + 24) = v10;
        v22 = (v16 & ~v10) == 0;
        v18 = v16 & ~v10;
        goto LABEL_21;
      case 1:
        v21 = ~*(_DWORD *)(v8 + 48 * v6 + 28);
        *(_DWORD *)(v8 + 48 * v6 + 28) = v11;
        v18 = v11 & v21;
        v22 = v18 == 0;
LABEL_21:
        if ( !v22 )
        {
          v19 = 0x10000;
LABEL_23:
          AuthzBasepSetAccessReasons(v18, v19, a4, *(_QWORD *)(v8 + 48 * v6 + 40), 0);
        }
        break;
      case 2:
        v17 = ~*(_DWORD *)(v8 + 48 * v6 + 32);
        *(_DWORD *)(v8 + 48 * v6 + 32) = v12;
        v18 = v12 & v17;
        if ( v18 )
        {
          v19 = 0x20000;
          goto LABEL_23;
        }
        break;
      default:
        return result;
    }
  }
}

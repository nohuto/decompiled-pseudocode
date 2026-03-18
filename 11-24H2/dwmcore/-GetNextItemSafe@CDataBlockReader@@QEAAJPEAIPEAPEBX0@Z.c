/*
 * XREFs of ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEBX0@Z @ 0x1801D729C
 * Callers:
 *     ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1801315F0 (-CheckPrimitives@CRenderData@@AEAAJXZ.c)
 * Callees:
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEBX0@Z @ 0x1801B0190 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEBX0@Z.c)
 */

__int64 __fastcall CDataBlockReader::GetNextItemSafe(
        CDataBlockReader *this,
        unsigned int *a2,
        const void **a3,
        unsigned int *a4)
{
  char *v4; // r11
  unsigned int *v6; // r10
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // eax

  v4 = (char *)this + 16;
  v6 = (unsigned int *)*((_QWORD *)this + 3);
  v8 = *((_QWORD *)this + 2) + *((unsigned int *)this + 8) - (_QWORD)v6;
  if ( v8 )
  {
    if ( v8 < 8 )
      return 2147500037LL;
    v9 = *v6;
    if ( (unsigned int)v9 < 8 || (v9 & 3) != 0 || v9 > v8 )
    {
      return 2147500037LL;
    }
    else
    {
      *a2 = v6[1];
      *a4 = v9 - 4;
      *((_QWORD *)this + 3) = (char *)v6 + v9;
      result = 0LL;
      *a3 = v6 + 1;
    }
  }
  else
  {
    *a3 = 0LL;
    *a4 = 0;
    v11 = **((_QWORD **)this + 1);
    result = 1LL;
    if ( v11 != *(_QWORD *)this )
    {
      *((_QWORD *)this + 1) = v11;
      v12 = *(_DWORD *)(v11 + 20);
      *(_QWORD *)v4 = v11 + 24;
      *((_QWORD *)v4 + 1) = v11 + 24;
      *((_DWORD *)v4 + 4) = v12;
      result = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)v4, a2, a3, a4);
      if ( (_DWORD)result == 1 && **((_QWORD **)this + 1) != *(_QWORD *)this )
        return 2147500037LL;
    }
  }
  return result;
}

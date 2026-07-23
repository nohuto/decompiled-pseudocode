/*
 * XREFs of PpmPerfGetCurrentState @ 0x140439344
 * Callers:
 *     PpmWmiGetAllData @ 0x1409B38B0 (PpmWmiGetAllData.c)
 *     PopProcessorInformation @ 0x1409F8FB0 (PopProcessorInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmPerfGetCurrentState(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  _DWORD *v8; // rbx
  unsigned int v10; // r10d
  unsigned int v11; // r9d
  unsigned __int64 result; // rax
  unsigned int v13; // ecx
  __int64 v14; // rcx

  v6 = *(_DWORD **)(a1 + 35248);
  v8 = *(_DWORD **)(a1 + 35256);
  v10 = 100;
  if ( v6 && v8 )
  {
    v11 = v8[20];
    result = (unsigned int)v6[132];
    if ( v11 >= (unsigned int)result )
      v11 = v6[132];
    if ( a2 )
    {
      result = (unsigned int)v8[21];
      *a2 = result;
    }
    if ( a3 )
    {
      v13 = v6[132] * v6[112];
      result = 1374389535 * v13;
      *a3 = v13 / 0x64;
    }
    if ( a5 )
    {
      result = (unsigned int)(v11 < v6[114]) + 1;
      *a5 = result;
    }
    if ( a6 )
    {
      result = (unsigned int)v8[8];
      *a6 = result;
      if ( v8[7] < 0x64u )
      {
        result = (unsigned int)result | 4;
        *a6 = result;
      }
    }
  }
  else
  {
    if ( a2 )
      *a2 = *(_DWORD *)(a1 + 68);
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 68);
    if ( a5 )
      *a5 = 0;
    result = (unsigned __int64)a6;
    if ( a6 )
      *a6 = 0;
  }
  if ( a4 )
  {
    v14 = *(_QWORD *)(a1 + 35248);
    result = *(_QWORD *)(a1 + 35256);
    if ( v14 && result )
    {
      if ( *(_BYTE *)(result + 112) )
        v10 = *(_DWORD *)(result + 132);
      else
        v10 = *(_DWORD *)(result + 80);
      result = *(unsigned int *)(v14 + 528);
      if ( v10 >= (unsigned int)result )
        v10 = *(_DWORD *)(v14 + 528);
    }
    *a4 = v10;
  }
  return result;
}

/*
 * XREFs of VidSchCaptureLogs @ 0x1400A6C10
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140051968 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

__int64 __fastcall VidSchCaptureLogs(__int64 a1)
{
  __int64 i; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rbx
  __int64 result; // rax

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    v3 = *(__int64 **)(a1 + 688);
    if ( (unsigned int)i < *(_DWORD *)(a1 + 760) )
      v3 += i;
    v4 = *v3;
    if ( v4 )
    {
      result = *(unsigned int *)(v4 + 12);
      if ( (result & 2) != 0 )
      {
        VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)v4);
        while ( 1 )
        {
          result = *(unsigned int *)(v4 + 16488);
          if ( !(_DWORD)result )
            break;
          KeWaitForSingleObject((PVOID)(v4 + 16496), Executive, 0, 0, 0LL);
        }
      }
    }
  }
  return result;
}

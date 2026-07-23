/*
 * XREFs of RtlpGetKernelScpFunctionTable @ 0x1405E4B40
 * Callers:
 *     RtlCopyKernelScpUnwindInfo @ 0x1405E4968 (RtlCopyKernelScpUnwindInfo.c)
 *     RtlCreateKernelScpFunctionTable @ 0x1405E4A48 (RtlCreateKernelScpFunctionTable.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 */

unsigned int *__fastcall RtlpGetKernelScpFunctionTable(void *a1, __int64 a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v6; // rsi
  unsigned int *v8; // rdi
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbx
  int v11; // r8d
  int v12; // eax
  unsigned __int64 v13; // r11
  int v14; // ecx
  __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int *v18; // r8
  int v19; // r9d
  int v20; // r8d
  unsigned int *v21; // rdx
  unsigned int *result; // rax
  ULONG v23[6]; // [rsp+20h] [rbp-18h] BYREF

  v23[0] = 0;
  v6 = a4;
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 3u, v23);
  if ( v8 )
  {
    if ( v23[0] )
    {
      v9 = v23[0] / 0xCuLL;
      if ( v23[0] == 12 * v9 )
      {
        v10 = a3 - a2;
        v11 = v9 - 1;
        v12 = 0;
        v13 = v10 + v6;
        while ( v11 >= v12 )
        {
          v14 = (v11 + v12) >> 1;
          v15 = v14;
          v16 = v8[3 * v14];
          if ( v13 > v16 )
          {
            v17 = v8[3 * v14 + 1];
            if ( v10 < v17 )
            {
              if ( v10 > v16 || v13 < v17 )
                return 0LL;
              if ( v14 > 0 )
              {
                v18 = &v8[3 * v14 - 3];
                do
                {
                  if ( *v18 < v10 )
                    break;
                  --v14;
                  --v15;
                  v18 -= 3;
                }
                while ( v15 > 0 );
              }
              v19 = v14 + 1;
              v20 = 1;
              if ( v14 + 1 < v9 )
              {
                v21 = &v8[3 * v14 + 4];
                do
                {
                  if ( *v21 > v13 )
                    break;
                  ++v19;
                  ++v20;
                  v21 += 3;
                }
                while ( v19 < v9 );
              }
              result = &v8[3 * v14];
              *a5 = v20;
              return result;
            }
            v12 = v14 + 1;
          }
          else
          {
            v11 = v14 - 1;
          }
        }
      }
    }
  }
  return 0LL;
}

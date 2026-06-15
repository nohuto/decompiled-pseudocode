/*
 * XREFs of ?SerializeProcessingModeCharacteristics@@YAJAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAKPEAPEAE@Z @ 0x18007F83C
 * Callers:
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x18007F784 (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 */

__int64 __fastcall SerializeProcessingModeCharacteristics(_QWORD *a1, unsigned int *a2, char **a3)
{
  _OWORD **v3; // r9
  unsigned int i; // ebp
  __int64 j; // rdx
  char *v7; // rax
  char *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  _OWORD **v11; // r15
  unsigned int v12; // ebx
  _OWORD **v13; // r13
  _DWORD *v14; // rsi
  unsigned int v15; // ebx
  unsigned __int16 ***v16; // r14
  unsigned __int16 ***v17; // r12
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned __int16 *v23; // rdx
  size_t v24; // r8
  __int64 v25; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (_OWORD **)*a1;
  for ( i = 8; v3 != (_OWORD **)a1[1]; ++v3 )
  {
    i += 20;
    for ( j = *((_QWORD *)*v3 + 2); j != *((_QWORD *)*v3 + 3); j += 8LL )
      i += *(unsigned __int16 *)(**(_QWORD **)j + 16LL) + 38;
  }
  v7 = (char *)CoTaskMemAlloc(i);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 != &v7[i] )
      memset_0(v7, 0, i);
    if ( i >= 4 )
    {
      *(_DWORD *)v8 = 10;
      if ( i - 4 >= 4 )
      {
        *((_DWORD *)v8 + 1) = (__int64)(a1[1] - *a1) >> 3;
        v11 = (_OWORD **)*a1;
        v12 = i - 8;
        v13 = (_OWORD **)a1[1];
        v14 = v8 + 8;
LABEL_15:
        if ( v11 == v13 )
        {
          *a2 = i;
          *a3 = v8;
          return 0LL;
        }
        if ( v12 < 0x10 )
        {
          v9 = 126LL;
        }
        else
        {
          v15 = v12 - 16;
          *(_OWORD *)v14 = **v11;
          if ( v15 < 4 )
          {
            v9 = 130LL;
          }
          else
          {
            v14[4] = (__int64)(*((_QWORD *)*v11 + 3) - *((_QWORD *)*v11 + 2)) >> 3;
            v12 = v15 - 4;
            v14 += 5;
            v16 = (unsigned __int16 ***)*((_QWORD *)*v11 + 2);
            v17 = (unsigned __int16 ***)*((_QWORD *)*v11 + 3);
            while ( 1 )
            {
              if ( v16 == v17 )
              {
                ++v11;
                goto LABEL_15;
              }
              if ( v12 < 4 )
                break;
              *v14 = *((_DWORD *)*v16 + 2);
              v18 = v12 - 4;
              if ( v18 < 4 )
              {
                v9 = 139LL;
                goto LABEL_11;
              }
              v14[1] = *((_DWORD *)*v16 + 3);
              v19 = v18 - 4;
              if ( v19 < 4 )
              {
                v9 = 142LL;
                goto LABEL_11;
              }
              v14[2] = *((_DWORD *)*v16 + 4);
              v20 = v19 - 4;
              if ( v20 < 4 )
              {
                v9 = 145LL;
                goto LABEL_11;
              }
              v14[3] = *((_DWORD *)*v16 + 5);
              v21 = v20 - 4;
              if ( v21 < 4 )
              {
                v9 = 148LL;
                goto LABEL_11;
              }
              v14[4] = *((_DWORD *)*v16 + 6);
              v22 = v21 - 4;
              v23 = **v16;
              v24 = v23[8] + 18LL;
              if ( v22 < v24 )
              {
                v9 = 150LL;
                goto LABEL_11;
              }
              memcpy_0(v14 + 5, v23, v24);
              v25 = (**v16)[8];
              v14 = (_DWORD *)((char *)v14 + v25 + 38);
              v12 = -18 - v25 + v22;
              ++v16;
            }
            v9 = 136LL;
          }
        }
      }
      else
      {
        v9 = 121LL;
      }
    }
    else
    {
      v9 = 117LL;
    }
LABEL_11:
    v10 = -2147024774;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)0x8007007ALL);
    CoTaskMemFree(v8);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)0x8007000ELL);
  }
  return v10;
}

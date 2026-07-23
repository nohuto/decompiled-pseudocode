/*
 * XREFs of WheapWmiExecuteErrorInjectionMethod @ 0x14065D610
 * Callers:
 *     WheapWmiExecuteMethod @ 0x14065DB18 (WheapWmiExecuteMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapWmiExecuteErrorInjectionMethod(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        int *a5)
{
  int v7; // ecx
  int v8; // ebx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int *v12; // r9
  __int64 v13; // r8
  _QWORD *v14; // r9
  int v15; // eax
  int InjectionCapabilities; // eax
  __int64 result; // rax
  unsigned int v18; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1 - 1;
  if ( !v7 )
  {
    v18 = 0;
    InjectionCapabilities = PshedGetInjectionCapabilities(&v18);
    v8 = 8;
    if ( a2 >= 8 )
    {
      if ( InjectionCapabilities < 0 )
      {
        *a3 = -1073741823;
        v9 = -1073741823;
      }
      else
      {
        *a3 = 0;
        v9 = 0;
        a3[1] = v18;
      }
      goto LABEL_15;
    }
LABEL_11:
    v9 = -1073741789;
    goto LABEL_15;
  }
  if ( v7 != 1 )
  {
    v8 = 0;
    v9 = -1073741161;
    goto LABEL_15;
  }
  if ( a4 < 0x24 )
  {
    v9 = -1073741811;
    v8 = 0;
    goto LABEL_15;
  }
  v10 = *a3;
  v11 = *((_QWORD *)a3 + 1);
  v12 = a3 + 4;
  v13 = *((_QWORD *)a3 + 2);
  v14 = v12 + 2;
  v8 = 4;
  if ( a2 < 4 )
    goto LABEL_11;
  v15 = PshedInjectError(v10, v11, v13, *v14, v14[1]);
  v9 = v15;
  if ( v15 < 0 )
    v9 = -1073741823;
  *a3 = (v15 >> 31) & 0xC0000001;
LABEL_15:
  result = v9;
  *a5 = v8;
  return result;
}

/*
 * XREFs of ?HampExtendedExecutionCheckPolicy@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@@Z @ 0x1800459E0
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180045548 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ?HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z @ 0x180071748 (-HampSystemCheckLocationCapability@@YAJPEAXPEAE@Z.c)
 */

__int64 __fastcall HampExtendedExecutionCheckPolicy(unsigned int *a1, void *a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  const wchar_t *v8; // rdx
  unsigned __int8 v9; // al
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned __int8 v19; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  v19 = 0;
  if ( !(_DWORD)v4 )
    goto LABEL_13;
  if ( (_DWORD)v4 != 1 )
  {
    if ( (_DWORD)v4 != 2 )
    {
      if ( (_DWORD)v4 == 3 )
      {
        v8 = L"extendedExecutionBackgroundAudio";
      }
      else
      {
        if ( (_DWORD)v4 != 4 )
          return 3221225659LL;
        v8 = L"extendedExecutionUnconstrained";
      }
      result = CapabilityCheck(a2, v8, &v19);
      goto LABEL_11;
    }
LABEL_13:
    v9 = 1;
    goto LABEL_14;
  }
  result = HampSystemCheckLocationCapability(a2, &v19);
LABEL_11:
  if ( (int)result < 0 )
    return result;
  v9 = v19;
LABEL_14:
  if ( !v9 )
    return 3221225506LL;
  v10 = a1[1] | 9;
  v11 = a1[2] | 0x11;
  a1[1] = v10;
  a1[2] = v11;
  if ( (_DWORD)v4 == 4 || (v11 |= 2u, v10 |= 0x202u, a1[2] = v11, a1[1] = v10, (v4 & 0xFFFFFFFD) == 0) )
  {
    a1[1] = v10 | 4;
    a1[2] = v11 | 4;
    a1[92] &= 0xFFFFFFFC;
    *((_QWORD *)a1 + 40) |= 0x20uLL;
  }
  v12 = *a1;
  v13 = a1[1];
  v14 = a1[2];
  if ( (_DWORD)v4 == 2 )
  {
    v15 = v14 | 0x100;
    v16 = v13 | 0x100;
    v17 = v12 & 0xFFFD73FF | 0x28800;
  }
  else
  {
    v15 = v14 | 0x80;
    v16 = v13 | 0x40;
    v17 = v12 | 0x28400;
  }
  a1[1] = v16;
  a1[2] = v15;
  v18 = dword_1800C0F70[v4];
  *a1 = v17;
  a1[67] = v18;
  if ( v18 != 5 )
    a1[68] = 300;
  return 0LL;
}

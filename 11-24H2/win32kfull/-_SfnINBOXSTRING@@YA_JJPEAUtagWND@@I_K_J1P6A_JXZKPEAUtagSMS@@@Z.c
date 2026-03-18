/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x14008AFA4
 * Callers:
 *     SfnINCBOXSTRING @ 0x14008A380 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x14008A6D0 (SfnINLBOXSTRING.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SfnDWORD @ 0x14007F9E0 (SfnDWORD.c)
 *     SfnINSTRING @ 0x14008A860 (SfnINSTRING.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     SfnINSTRINGNULL @ 0x14016FBA0 (SfnINSTRINGNULL.c)
 */

int *__fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        int *a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        unsigned int a8)
{
  __int64 *v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // eax

  v10 = (__int64 *)a2;
  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    v12 = 0LL;
  LOBYTE(a2) = 1;
  if ( !HMValidateHandleNoSecure(v12, a2) )
    return 0LL;
  v15 = *((_DWORD *)PtiCurrent(v14, v13) + 401);
  if ( v15 == 1 )
    return (int *)SfnDWORD(v10, a3, a4, (__int64)a5, a6, (__int64)a7);
  if ( v15 != 2 )
    return 0LL;
  v16 = 399;
  if ( a1 != 678 )
    v16 = 332;
  if ( a3 == v16 )
    return (int *)SfnINSTRINGNULL((_DWORD)v10, a3, a4, (_DWORD)a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING(v10, a3, a4, a5, a6, (__int64)a7, a8);
}

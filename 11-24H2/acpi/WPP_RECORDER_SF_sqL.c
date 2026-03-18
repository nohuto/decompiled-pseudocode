/*
 * XREFs of WPP_RECORDER_SF_sqL @ 0x140025DD8
 * Callers:
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x140025BF0 (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1400BDE58 (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_sqL(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  const char *v6; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v20 = va_arg(va1, _QWORD);
  v6 = a6;
  v9 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a2;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a6;
    if ( !a6 )
      v18 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v18,
      v17,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v14 = v9 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v12, a3, a5, v19, v6, v14, (__int64 *)va);
}

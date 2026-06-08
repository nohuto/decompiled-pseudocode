/*
 * XREFs of AcpiParseULongArray @ 0x14002B220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_sD @ 0x1400063FC (WPP_RECORDER_SF_sD.c)
 *     GetObjectTypeName @ 0x14002D53C (GetObjectTypeName.c)
 */

__int64 __fastcall AcpiParseULongArray(__int64 a1, unsigned int **a2, unsigned int a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int *Pool2; // rax
  __int64 v12; // rdx
  unsigned int *v13; // rsi
  unsigned __int16 *v14; // rdi
  unsigned int i; // r8d
  __int64 v16; // rcx
  __int64 v17; // rax
  const char *ObjectTypeName; // rax
  int v19; // r8d

  if ( *(_WORD *)(a1 + 2) < 4u || a3 < 8 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = 0;
    *a2 = 0LL;
    v6 = 0;
    v7 = *(unsigned __int16 *)(a1 + 2);
    if ( (unsigned __int16)v7 >= 4u )
    {
      v8 = a1 + 4;
      v9 = a1 + 4 + v7;
      while ( v8 < v9 )
      {
        v10 = *(unsigned __int16 *)(v8 + 2);
        if ( (unsigned __int16)v10 < 4u )
          v10 = 4LL;
        v8 += v10 + 4;
        ++v6;
      }
    }
    Pool2 = (unsigned int *)ExAllocatePool2(64LL, (int)(4 * v6) + 4LL, 1919119952LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v6;
      v14 = (unsigned __int16 *)(a1 + 4);
      for ( i = 0; ; ++i )
      {
        if ( i >= v6 )
        {
          *a2 = v13;
          return v5;
        }
        v16 = *v14;
        if ( (_WORD)v16 )
          break;
        v13[i + 1] = *((_DWORD *)v14 + 1);
        v17 = v14[1];
        if ( (unsigned __int16)v17 < 4u )
          v17 = 4LL;
        v14 = (unsigned __int16 *)((char *)v14 + v17 + 4);
      }
      v5 = -1072431096;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        ObjectTypeName = (const char *)GetObjectTypeName(v16, v12);
        WPP_RECORDER_SF_sD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x53u,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
          ObjectTypeName,
          v19);
      }
      ExFreePoolWithTag(v13, (ULONG)1919119952);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}

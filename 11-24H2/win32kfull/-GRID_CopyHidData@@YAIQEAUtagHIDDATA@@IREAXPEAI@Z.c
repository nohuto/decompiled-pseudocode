/*
 * XREFs of ?GRID_CopyHidData@@YAIQEAUtagHIDDATA@@IREAXPEAI@Z @ 0x140290B54
 * Callers:
 *     ?GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z @ 0x140182284 (-GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GRID_CopyHidData(struct tagHIDDATA *const a1, int a2, void *volatile a3, unsigned int *a4)
{
  char *v4; // rsi
  int v5; // r8d
  int v6; // ecx
  unsigned int v8; // edi
  unsigned int *v9; // rax
  int v10; // edx
  void *v11; // rcx

  v4 = (char *)a1 + 56;
  v5 = *((_DWORD *)a1 + 14);
  if ( v5 && (unsigned int)(v5 - 1) >= 2 )
  {
    v6 = 6;
LABEL_4:
    UserSetLastError(v6);
    return 0xFFFFFFFFLL;
  }
  if ( a2 == 268435459 )
  {
    v8 = *((_DWORD *)a1 + 15);
  }
  else
  {
    if ( a2 != 268435461 )
    {
      v6 = 87;
      goto LABEL_4;
    }
    v8 = 24;
  }
  if ( a3 )
  {
    v9 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    if ( *v9 < v8 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (unsigned int *)MmUserProbeAddress;
      *a4 = v8;
      UserSetLastError(122);
      return 0xFFFFFFFFLL;
    }
    v10 = a2 - 268435459;
    if ( v10 )
    {
      if ( v10 == 2 )
      {
        v11 = a3;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          v11 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v11, v4, 0x18uLL);
      }
    }
    else
    {
      ProbeForWrite(a3, v8, 4u);
      memmove(a3, v4, v8);
    }
    return v8;
  }
  else
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v8;
    return 0LL;
  }
}

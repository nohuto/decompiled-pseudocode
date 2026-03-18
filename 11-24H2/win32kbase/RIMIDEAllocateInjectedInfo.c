/*
 * XREFs of RIMIDEAllocateInjectedInfo @ 0x14019FB00
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

__int64 __fastcall RIMIDEAllocateInjectedInfo(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax

  result = Win32AllocPoolZInitImpl(256LL, 0x60uLL, 0x6A6E6952u);
  v3 = result;
  if ( result )
  {
    v4 = Win32AllocPoolZInitImpl(256LL, 8LL * *(unsigned int *)(a1 + 96), 0x6A6E6952u);
    if ( v4 )
    {
      *(_QWORD *)(v3 + 72) = v4;
    }
    else
    {
      GreDeleteFastMutex((char *)v3);
      return 0LL;
    }
    return v3;
  }
  return result;
}

/*
 * XREFs of SecureDump_ReadRegistry @ 0x14059EE88
 * Callers:
 *     SecureDump_PrepareForInit @ 0x14059E99C (SecureDump_PrepareForInit.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140A74FB0 (IopOpenRegistryKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_ReadRegistry(__int64 a1, __int64 a2, int a3, void **a4, _DWORD *a5)
{
  _DWORD *v7; // rsi
  __int64 result; // rax
  int RegistryValue; // ebx
  __int64 Pool2; // rax
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = a5;
  if ( !a5 )
    return 3221225485LL;
  result = IopOpenRegistryKey(&Handle, 0LL, a1, 131097LL, 0);
  if ( (int)result >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( MEMORY[0xC] )
      {
        if ( a3 == MEMORY[4] )
        {
          Pool2 = ExAllocatePool2(0x40uLL);
          *a4 = (void *)Pool2;
          if ( Pool2 )
          {
            *v7 = MEMORY[0xC];
            memmove(*a4, (const void *)MEMORY[8], MEMORY[0xC]);
          }
          else
          {
            RegistryValue = -1073741670;
          }
        }
        else
        {
          RegistryValue = -1073741788;
        }
      }
      else
      {
        RegistryValue = -1073741820;
      }
      ExFreePoolWithTag(0LL, 0);
    }
    ObCloseHandle(Handle, 0);
    return (unsigned int)RegistryValue;
  }
  return result;
}

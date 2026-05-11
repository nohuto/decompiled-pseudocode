/*
 * XREFs of USBHwGetMicArrayDescriptor @ 0x140035438
 * Callers:
 *     USBParseGetMicArrayDescriptor @ 0x140037E60 (USBParseGetMicArrayDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     USBHwGetSetMemory @ 0x1400358F0 (USBHwGetSetMemory.c)
 */

__int64 __fastcall USBHwGetMicArrayDescriptor(__int64 a1, int a2, unsigned __int16 **a3)
{
  int v3; // ebx
  unsigned __int16 v5; // r14
  int v6; // r9d
  __int64 v7; // r15
  int SetMemory; // eax
  __int64 v9; // rdx
  __int64 Pool2; // rax
  int v12; // edx
  unsigned __int16 *v13; // rdi
  int v14; // ebx
  unsigned __int64 v15; // rdx
  _BYTE v16[20]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+54h] [rbp-2Ch]
  int v18; // [rsp+68h] [rbp-18h] BYREF
  int v19; // [rsp+6Ch] [rbp-14h]
  int v20; // [rsp+70h] [rbp-10h]

  v3 = a1;
  v5 = a2;
  v6 = (unsigned __int16)a2;
  LOBYTE(a2) = -123;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  *a3 = 0LL;
  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  SetMemory = USBHwGetSetMemory(a1, a2, 0, v6, *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 2LL), 0, 18, (__int64)v16);
  if ( SetMemory < 0 )
  {
    if ( SetMemory == -1073741823 )
      return (unsigned int)-1073741275;
    return (unsigned int)SetMemory;
  }
  else if ( *(_QWORD *)v16 == USBAUDIO_MIC_ARRAY_DESCRIPTOR && *(_QWORD *)&v16[8] == 0x14D34A2D16C584B1LL )
  {
    if ( *(_WORD *)&v16[16] < 0x24u )
    {
      v18 = 53866815;
      v19 = 1;
      v20 = -1073741668;
      RtlLogUnexpectedCodepath(&v18, v9);
      return 3221225628LL;
    }
    Pool2 = ExAllocatePool2(64LL, *(unsigned __int16 *)&v16[16], 1096972357LL);
    v13 = (unsigned __int16 *)Pool2;
    if ( Pool2 )
    {
      LOBYTE(v12) = -123;
      v14 = USBHwGetSetMemory(
              v3,
              v12,
              0,
              v5,
              *(unsigned __int8 *)(*(_QWORD *)(v7 + 48) + 2LL),
              0,
              *(unsigned __int16 *)&v16[16],
              Pool2);
      if ( v14 >= 0 )
      {
        v15 = v13[8];
        if ( (unsigned __int16)v15 > *(_WORD *)&v16[16]
          || (unsigned int)v15 < 0x24
          || v15 < 12 * ((unsigned __int64)v13[17] + 3) )
        {
          v18 = 53866815;
          v19 = 1;
          v20 = -1073741668;
          RtlLogUnexpectedCodepath(&v18, v15);
          ExFreePool(v13);
          return 3221225628LL;
        }
        *a3 = v13;
      }
      else
      {
        ExFreePool(v13);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v14;
}

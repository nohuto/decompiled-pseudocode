/*
 * XREFs of BiConvertRegistryDataToElement @ 0x1409BF658
 * Callers:
 *     BcdGetElementDataWithFlags @ 0x1409BE80C (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     BiResolveLocateDevice @ 0x14081243C (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToElement @ 0x140812780 (BiConvertBootEnvironmentDeviceToElement.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertRegistryDataToElement(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        __int16 a5,
        GUID *Guid,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  unsigned int v8; // r13d
  unsigned int v9; // edi
  const WCHAR *v10; // r15
  unsigned int v12; // esi
  char v13; // r12
  __int64 v14; // rbx
  GUID *v15; // rdi
  int v16; // ebx
  __int64 v17; // rax
  unsigned int v18; // ecx
  GUID *v20; // r12
  GUID *v21; // rcx
  GUID *v22; // rcx
  unsigned int *v23; // rdi
  __int64 v24; // rdx
  GUID *v25; // rbx
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  size_t Size; // [rsp+98h] [rbp+48h] BYREF

  v7 = a7;
  v8 = 0;
  v9 = a3;
  P = 0LL;
  LODWORD(Size) = 0;
  v10 = (const WCHAR *)a2;
  v12 = 0;
  DestinationString = 0LL;
  if ( (HIBYTE(a4) & 0xF) == 1 )
  {
    if ( a3 < 0x1C || a2[6] + 16LL != a3 )
      goto LABEL_28;
    v16 = BiConvertBootEnvironmentDeviceToElement(a2 + 4, a4, a5, (__int64)&P, (__int64)&Size);
    if ( v16 < 0 )
    {
      v12 = Size;
      goto LABEL_18;
    }
    v23 = (unsigned int *)P;
    if ( *(_DWORD *)P == 8 )
    {
      if ( (a5 & 0x100) != 0 )
      {
        BiLogMessage();
      }
      else if ( (int)BiResolveLocateDevice(a1, P) >= 0 )
      {
        v24 = v23[6];
        v12 = Size - v24;
        memmove(v23, (char *)v23 + v24, (unsigned int)(Size - v24));
        goto LABEL_65;
      }
    }
    v12 = Size;
LABEL_65:
    if ( v12 > *v7 )
    {
      v16 = -1073741789;
      ExFreePoolWithTag(v23, 0x4B444342u);
      goto LABEL_11;
    }
    v25 = Guid;
    memmove(Guid, v23, v12);
    *(GUID *)&v25->Data2 = *(GUID *)v10;
    ExFreePoolWithTag(v23, 0x4B444342u);
    goto LABEL_10;
  }
  if ( (HIBYTE(a4) & 0xF) == 2 )
  {
    if ( a3 && (a3 & 1) == 0 )
    {
      v13 = 0;
      v12 = a3;
      v14 = a3;
      if ( *(_WORD *)((char *)a2 + a3 - 2) )
      {
        v9 = a3 + 2;
        v13 = 1;
        v12 = a3 + 2;
      }
      if ( v9 <= *a7 )
      {
        v15 = Guid;
        memmove(Guid, a2, a3);
        if ( v13 )
          *(_WORD *)((char *)&v15->Data1 + v14) = 0;
        goto LABEL_10;
      }
LABEL_41:
      v16 = -1073741789;
      goto LABEL_11;
    }
    goto LABEL_28;
  }
  if ( (HIBYTE(a4) & 0xF) != 3 )
  {
    if ( (HIBYTE(a4) & 0xF) == 4 )
    {
      v20 = Guid;
      v18 = 0;
      LODWORD(Size) = 0;
      v16 = 0;
      if ( a3 >= 2 && (a3 & 1) == 0 )
      {
        *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
        if ( *(_WORD *)a2 )
        {
          do
          {
            if ( v18 >= v9 )
              break;
            v8 += 16;
            v12 = v8;
            if ( v8 <= *v7 )
            {
              RtlInitUnicodeString(&DestinationString, v10);
              v16 = RtlGUIDFromString(&DestinationString, v20);
              if ( v16 < 0 )
                goto LABEL_18;
              v18 = Size;
              ++v20;
            }
            v17 = -1LL;
            do
              ++v17;
            while ( v10[v17] );
            v18 += 2 * v17 + 2;
            LODWORD(Size) = v18;
            v10 += (unsigned int)(v17 + 1);
          }
          while ( *v10 );
        }
        if ( v12 > *v7 )
          v16 = -1073741789;
        goto LABEL_11;
      }
      goto LABEL_28;
    }
    if ( (HIBYTE(a4) & 0xF) == 5 )
    {
      v12 = 8;
      if ( a3 > 8 )
        goto LABEL_28;
      if ( *a7 < 8 )
        goto LABEL_41;
      v21 = Guid;
      *(_QWORD *)&Guid->Data1 = 0LL;
    }
    else
    {
      if ( (HIBYTE(a4) & 0xF) == 6 )
      {
        if ( a3 != 1 )
          goto LABEL_28;
        v12 = 2;
        if ( *a7 < 2 )
          goto LABEL_41;
        v22 = Guid;
        BYTE1(Guid->Data1) = 0;
        LOBYTE(v22->Data1) = *(_BYTE *)a2 != 0;
        goto LABEL_10;
      }
      if ( (HIBYTE(a4) & 0xF) == 7 )
      {
        if ( !a3 || (a3 & 7) != 0 )
          goto LABEL_28;
        v12 = a3;
        if ( *a7 < a3 )
          goto LABEL_41;
      }
      else
      {
        if ( !a3 )
          goto LABEL_28;
        v12 = a3;
        if ( a3 > *a7 )
          goto LABEL_41;
      }
      v21 = Guid;
    }
    memmove(v21, a2, a3);
    goto LABEL_10;
  }
  v12 = 16;
  if ( *a7 < 0x10 )
    goto LABEL_41;
  if ( a3 < 2 || (a3 & 1) != 0 )
  {
LABEL_28:
    BiLogMessage();
    return (unsigned int)-1073741788;
  }
  *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)a2);
  v16 = RtlGUIDFromString(&DestinationString, Guid);
  if ( v16 < 0 )
  {
LABEL_18:
    if ( v16 != -1073741789 )
      return (unsigned int)v16;
    goto LABEL_11;
  }
LABEL_10:
  v16 = 0;
LABEL_11:
  *v7 = v12;
  return (unsigned int)v16;
}

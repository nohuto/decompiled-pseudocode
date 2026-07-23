/*
 * XREFs of SiGetBiosSystemPartition @ 0x1408174E0
 * Callers:
 *     SiGetFirmwareSystemPartition @ 0x140A222B0 (SiGetFirmwareSystemPartition.c)
 * Callees:
 *     wcsstr @ 0x1404FDB70 (wcsstr.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     SiGetDriveLayoutInformation @ 0x140816754 (SiGetDriveLayoutInformation.c)
 *     SiGetBiosSystemDisk @ 0x1408173B0 (SiGetBiosSystemDisk.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetBiosSystemPartition(wchar_t **a1)
{
  wchar_t *Pool2; // rbp
  int BiosSystemDisk; // eax
  wchar_t *v4; // rdi
  int v5; // ebx
  int DriveLayoutInformation; // eax
  _DWORD *v7; // rsi
  wchar_t *v8; // rax
  __int64 v9; // rax
  ULONG_PTR v10; // rbx
  _DWORD *v11; // rax
  unsigned int i; // ecx
  wchar_t *Str; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = 0LL;
  Pool2 = 0LL;
  Str = 0LL;
  BiosSystemDisk = SiGetBiosSystemDisk(&Str);
  v4 = Str;
  v5 = BiosSystemDisk;
  if ( BiosSystemDisk < 0 )
    goto LABEL_21;
  DriveLayoutInformation = SiGetDriveLayoutInformation(Str, &P);
  v7 = P;
  v5 = DriveLayoutInformation;
  if ( DriveLayoutInformation >= 0 )
  {
    if ( !*(_DWORD *)P )
    {
      v8 = wcsstr(v4, L"\\Partition0");
      if ( v8 )
        *v8 = 0;
      v9 = -1LL;
      do
        ++v9;
      while ( v4[v9] );
      v10 = (unsigned int)(2 * v9 + 42);
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v10, 0x4B505953u);
      if ( !Pool2 )
      {
        v5 = -1073741670;
        goto LABEL_16;
      }
      v11 = v7 + 12;
      for ( i = 0; i < v7[1]; ++i )
      {
        if ( *((_BYTE *)v11 + 33) )
        {
          swprintf_s(Pool2, v10 >> 1, L"%s\\Partition%lu", v4, v11[6]);
          *a1 = Pool2;
          v5 = 0;
          goto LABEL_16;
        }
        v11 += 36;
      }
    }
    v5 = -1073740718;
  }
LABEL_16:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v5 < 0 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_21:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v5;
}

/*
 * XREFs of ExpFindDiskSignature @ 0x140A61EC0
 * Callers:
 *     ExpConvertSignatureName @ 0x1407AC248 (ExpConvertSignatureName.c)
 *     ExpTranslateEfiPath @ 0x140A6183C (ExpTranslateEfiPath.c)
 *     ExpCreateOutputEFI @ 0x140A629F4 (ExpCreateOutputEFI.c)
 * Callees:
 *     swprintf_s @ 0x1405006D0 (swprintf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     ExpGetPartitionTableInfo @ 0x140A6208C (ExpGetPartitionTableInfo.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpFindDiskSignature(_QWORD *a1, _DWORD *a2, unsigned int *a3, _QWORD *a4, _QWORD *a5, char a6)
{
  NTSTATUS result; // eax
  wchar_t *Pool2; // rbp
  unsigned int v8; // esi
  int PartitionTableInfo; // ebx
  __int64 i; // rdx
  _DWORD *v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  _DWORD *P; // [rsp+20h] [rbp-88h]
  __int128 SystemInformation; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20; // [rsp+58h] [rbp-50h]

  P = 0LL;
  v20 = 0LL;
  SystemInformation = 0LL;
  result = ZwQuerySystemInformation(SystemDeviceInformation, &SystemInformation, 0x18u, 0LL);
  if ( result >= 0 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v8 = 0;
      if ( !(_DWORD)SystemInformation )
        goto LABEL_21;
      do
      {
        swprintf_s(Pool2, 0x26uLL, L"\\Device\\Harddisk%lu\\Partition0", v8, P);
        PartitionTableInfo = ExpGetPartitionTableInfo(Pool2);
        if ( PartitionTableInfo >= 0 )
        {
          if ( *P == (a6 == 1) && (a6 == 1 || P[2] == *(_DWORD *)a1) )
          {
            for ( i = 0LL; (unsigned int)i < P[1]; i = (unsigned int)(i + 1) )
            {
              v11 = &P[36 * i];
              if ( a6 == 1 )
              {
                v13 = *((_QWORD *)v11 + 12) - *a1;
                if ( !v13 )
                  v13 = *((_QWORD *)v11 + 13) - a1[1];
                v12 = v13 == 0;
              }
              else
              {
                v12 = v11[18] == *a2;
              }
              if ( v12 )
              {
                *a2 = v11[18];
                *a3 = v8;
                if ( a4 )
                  *a4 = *((_QWORD *)v11 + 7);
                if ( a5 )
                  *a5 = *((_QWORD *)v11 + 8);
                ExFreePoolWithTag(P, 0);
                goto LABEL_22;
              }
            }
          }
          ExFreePoolWithTag(P, 0);
        }
        ++v8;
      }
      while ( v8 < (unsigned int)SystemInformation );
      if ( PartitionTableInfo >= 0 )
LABEL_21:
        PartitionTableInfo = -1073741766;
LABEL_22:
      ExFreePoolWithTag(Pool2, 0);
      return PartitionTableInfo;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}

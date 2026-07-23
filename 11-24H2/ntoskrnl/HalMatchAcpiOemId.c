/*
 * XREFs of HalMatchAcpiOemId @ 0x14045F7B0
 * Callers:
 *     EmpEvaluateNodeLink @ 0x140431B1C (EmpEvaluateNodeLink.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     HalpAcpiGetTableWork @ 0x14045F9FC (HalpAcpiGetTableWork.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     strlen @ 0x1406C13D0 (strlen.c)
 *     RtlCompareString @ 0x140906870 (RtlCompareString.c)
 */

__int64 __fastcall HalMatchAcpiOemId(__int64 a1, __int64 a2, int **a3, int a4)
{
  unsigned int v5; // edi
  int v6; // ebx
  __int64 TableWork; // rbx
  size_t v9; // rax
  char *v10; // rcx
  unsigned __int16 v11; // bx
  size_t v12; // rax
  unsigned __int16 Length; // cx
  STRING String1; // [rsp+20h] [rbp-30h] BYREF
  STRING String2; // [rsp+30h] [rbp-20h] BYREF
  char Str[4]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v17; // [rsp+44h] [rbp-Ch]
  char v18; // [rsp+46h] [rbp-Ah]

  v5 = 1;
  if ( a4 == 2 )
  {
    if ( *a3 )
    {
      if ( a3[1] )
      {
        v6 = **a3;
        ExAcquireFastMutex(&HalpAcpiTableCacheLock);
        TableWork = HalpAcpiGetTableWork(0, v6, 0, 0);
        KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
        if ( TableWork )
        {
          *(_DWORD *)Str = 0;
          v17 = 0;
          v18 = 0;
          *(_DWORD *)Str = *(_DWORD *)(TableWork + 10);
          v17 = *(_WORD *)(TableWork + 14);
          *(_QWORD *)&String2.Length = 0LL;
          String2.Buffer = Str;
          v9 = strlen(Str);
          v10 = (char *)a3[1];
          v11 = v9;
          String1.Buffer = v10;
          if ( v9 >= 0xFFFF )
            v11 = -2;
          *(_QWORD *)&String1.Length = 0LL;
          String2.Length = v11;
          String2.MaximumLength = v11 + 1;
          if ( v10 )
          {
            v12 = strlen(v10);
            Length = v12;
            if ( v12 >= 0xFFFF )
              Length = -2;
            String1.Length = Length;
            String1.MaximumLength = Length + 1;
          }
          else
          {
            Length = String1.Length;
          }
          if ( Length != v11 || RtlCompareString(&String1, &String2, 1u) )
            return 0;
          else
            return 2;
        }
      }
    }
  }
  return v5;
}

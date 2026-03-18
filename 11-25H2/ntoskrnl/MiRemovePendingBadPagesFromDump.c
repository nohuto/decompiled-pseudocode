/*
 * XREFs of MiRemovePendingBadPagesFromDump @ 0x14066887C
 * Callers:
 *     MmGetDumpRange @ 0x14066C1F8 (MmGetDumpRange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MiRemovePendingBadPagesFromDump(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // rbp
  _QWORD *v3; // rax
  _QWORD *i; // rbx
  _QWORD **v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  unsigned int *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // r15
  char *v12; // r12

  v1 = a1;
  if ( qword_140E2FC88 )
  {
    v2 = 0LL;
    if ( qword_140E2FC98 )
    {
      v8 = (unsigned int *)MmPhysicalMemoryBlock;
      if ( MmPhysicalMemoryBlock )
      {
        v9 = 0;
        if ( *(_DWORD *)MmPhysicalMemoryBlock )
        {
          do
          {
            v10 = *(_QWORD *)&v8[4 * v9 + 4];
            v11 = *(_QWORD *)&v8[4 * v9 + 6];
            v12 = (char *)(48 * v10 - 0x21FFFFFFFFDDLL);
            while ( v11 )
            {
              if ( (*v12 & 0x40) != 0 )
              {
                if ( *v12 < 0 )
                {
                  guard_dispatch_icall_no_overrides(v1);
                  v1 = a1;
                }
                if ( ++v2 == qword_140E2FC88 )
                {
                  v9 = *v8 - 1;
                  break;
                }
              }
              --v11;
              ++v10;
              v12 += 48;
            }
            ++v9;
          }
          while ( v9 < *v8 );
        }
      }
    }
    else
    {
      v3 = (_QWORD *)qword_140E2FC80;
      i = 0LL;
      while ( v3 )
      {
        i = v3;
        v3 = (_QWORD *)*v3;
      }
      while ( i )
      {
        if ( *(char *)(i[3] + 35LL) < 0 )
        {
          guard_dispatch_icall_no_overrides(v1);
          v1 = a1;
        }
        v5 = (_QWORD **)i[1];
        v6 = i;
        if ( v5 )
        {
          v7 = *v5;
          for ( i = (_QWORD *)i[1]; v7; v7 = (_QWORD *)*v7 )
            i = v7;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v6 )
              break;
            v6 = i;
          }
        }
      }
    }
  }
}

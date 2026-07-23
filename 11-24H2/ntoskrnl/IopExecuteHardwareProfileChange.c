/*
 * XREFs of IopExecuteHardwareProfileChange @ 0x140737D04
 * Callers:
 *     PnpProfileUpdateHardwareProfile @ 0x14072B41C (PnpProfileUpdateHardwareProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmSetAcpiHwProfile @ 0x1407D2A94 (CmSetAcpiHwProfile.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopExecuteHardwareProfileChange(__int64 a1, PCWSTR *a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 Pool2; // rax
  const void **v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // r15
  __int16 v11; // si
  UNICODE_STRING *v12; // rbx
  __int64 v13; // r14
  PCWCH *v14; // rbx
  __int64 v15; // r14
  PCWCH *v16; // rdi
  __int128 v17; // xmm0
  __int64 v18; // rdx
  int v19; // r14d
  const void **v20; // rcx
  int v21; // eax
  unsigned int v22; // r14d
  __int64 v23; // rax
  int v24; // r8d
  _WORD *v25; // rdi
  _WORD *v26; // r12
  size_t v27; // rbx
  const void **v29; // [rsp+38h] [rbp-30h]

  v6 = a3;
  Pool2 = ExAllocatePool2(0x40uLL, 16 * a3, 0x33706E50u);
  v29 = (const void **)Pool2;
  v8 = (const void **)Pool2;
  if ( Pool2 )
  {
    v10 = v6;
    v11 = 1;
    if ( (_DWORD)v6 )
    {
      v12 = (UNICODE_STRING *)Pool2;
      v13 = v6;
      do
      {
        RtlInitUnicodeString(v12++, *a2++);
        --v13;
      }
      while ( v13 );
      do
      {
        if ( (_DWORD)v6 != 1 )
        {
          v14 = (PCWCH *)v8;
          v15 = (unsigned int)(v6 - 1);
          v16 = (PCWCH *)(v8 + 2);
          do
          {
            if ( RtlCompareUnicodeStrings(
                   v14[1],
                   (unsigned __int64)*(unsigned __int16 *)v14 >> 1,
                   v16[1],
                   (unsigned __int64)*(unsigned __int16 *)v16 >> 1,
                   0) > 0 )
            {
              v17 = *(_OWORD *)v16;
              *(_OWORD *)v16 = *(_OWORD *)v14;
              *(_OWORD *)v14 = v17;
            }
            v16 += 2;
            v14 += 2;
            --v15;
          }
          while ( v15 );
        }
        --v10;
      }
      while ( v10 );
      v18 = v6;
      v19 = 0;
      v20 = v8;
      do
      {
        v21 = *(unsigned __int16 *)v20;
        v20 += 2;
        v19 += v21;
        --v18;
      }
      while ( v18 );
      v10 = v6;
    }
    else
    {
      v19 = 0;
    }
    v22 = v19 + 2;
    v23 = ExAllocatePool2(0x40uLL, v22 + 6LL, 0x33706E50u);
    v25 = (_WORD *)v23;
    if ( v23 )
    {
      v26 = (_WORD *)(v23 + 4);
      if ( (_DWORD)v6 )
      {
        do
        {
          v27 = *(unsigned __int16 *)v8;
          memmove(v26, v8[1], v27);
          v26 = (_WORD *)((char *)v26 + v27);
          v8 += 2;
          --v10;
        }
        while ( v10 );
        v8 = v29;
      }
      *v26 = 0;
      v25[1] = v22;
      if ( (unsigned int)v6 > 1 || v25[2] )
        v11 = 2;
      *v25 = v11;
      v9 = CmSetAcpiHwProfile((_DWORD)v25, (unsigned int)IopExecuteHwpDefaultSelect, v24, a4, a5);
    }
    else
    {
      v9 = -1073741670;
    }
    ExFreePoolWithTag(v8, 0x33706E50u);
    if ( v25 )
      ExFreePoolWithTag(v25, 0x33706E50u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}

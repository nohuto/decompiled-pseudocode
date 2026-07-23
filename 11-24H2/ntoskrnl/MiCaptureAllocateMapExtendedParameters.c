/*
 * XREFs of MiCaptureAllocateMapExtendedParameters @ 0x140987F30
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     MiMapViewOfSectionExCommon @ 0x140987880 (MiMapViewOfSectionExCommon.c)
 *     MmAllocateVirtualMemory @ 0x1409DB280 (MmAllocateVirtualMemory.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 */

__int64 __fastcall MiCaptureAllocateMapExtendedParameters(
        unsigned __int64 *Address,
        unsigned int a2,
        char a3,
        int a4,
        _QWORD *a5)
{
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  SIZE_T v10; // rcx
  int v11; // r12d
  char *v12; // rbx
  int v13; // ecx
  int v14; // eax
  unsigned __int64 v15; // rcx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  int v25; // edx
  unsigned __int64 v26; // r8
  unsigned __int64 *v27; // [rsp+38h] [rbp-50h]
  char *v28; // [rsp+48h] [rbp-40h]

  v7 = a2;
  memset_0(a5, 0, 0x48uLL);
  if ( !(_DWORD)v7 )
    return Address != 0LL ? 0xC000000D : 0;
  if ( !Address )
    return 3221225485LL;
  v10 = 16 * v7;
  if ( is_mul_ok(v7, 0x10uLL) )
  {
    result = 0LL;
  }
  else
  {
    v10 = -1LL;
    result = 3221225621LL;
  }
  if ( (int)result >= 0 )
  {
    v11 = 0;
    if ( a3 )
      ProbeForWrite(Address, v10, 8u);
    v27 = Address;
    v12 = (char *)&Address[2 * v7];
    v28 = v12;
    while ( Address < (unsigned __int64 *)v12 )
    {
      v13 = (unsigned __int8)*(_DWORD *)Address;
      if ( (unsigned int)(v13 - 1) > 5 || *Address >= 0x100 )
        return 3221225485LL;
      v14 = 1 << v13;
      if ( ((1 << v13) & a4) == 0 )
        return 3221225485LL;
      if ( (v14 & v11) != 0 )
        return 3221225485LL;
      v11 |= v14;
      if ( v13 == 1 )
      {
        v15 = Address[1];
        if ( a3 )
        {
          if ( (v15 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v15 + 24 > 0x7FFFFFFF0000LL || v15 + 24 < v15 )
          {
            Address = v27;
            v12 = v28;
          }
        }
        *a5 = *(_QWORD *)v15;
        a5[1] = *(_QWORD *)(v15 + 8);
        a5[2] = *(_QWORD *)(v15 + 16);
      }
      else
      {
        v16 = v13 - 2;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                if ( v19 != 1 )
                  return 3221225485LL;
                v21 = Address[1];
                if ( v21 > 0xFFFF )
                  return 3221225485LL;
                *((_WORD *)a5 + 25) = v21;
              }
              else
              {
                v20 = Address[1];
                a5[7] = v20;
                if ( (v20 & 0xFFFFFDC0) != 0 )
                  return 3221225485LL;
              }
            }
            else
            {
              a5[5] = Address[1];
              *((_BYTE *)a5 + 48) = 1;
            }
          }
          else
          {
            v22 = Address[1];
            a5[3] = v22;
            if ( !v22 )
              return 3221225485LL;
          }
        }
        else
        {
          v23 = Address[1];
          v24 = v23;
          v25 = v23;
          if ( (unsigned __int64)v23 > 0xFFFFFFFF )
          {
            v26 = Address[1];
            if ( v23 < 0 )
            {
              v23 &= ~0x8000000000000000uLL;
              v24 = v23;
              v26 = v23;
              *((_BYTE *)a5 + 49) = 1;
              v25 = v23;
            }
            if ( v26 > 0xFFFFFFFF )
              return 3221225485LL;
          }
          *((_DWORD *)a5 + 8) = v23;
          if ( v24 == -1 )
            return 3221225485LL;
          *((_DWORD *)a5 + 8) = v25 + 1;
        }
      }
      Address += 2;
      v27 = Address;
    }
    *((_DWORD *)a5 + 13) = v11;
    return 0LL;
  }
  return result;
}

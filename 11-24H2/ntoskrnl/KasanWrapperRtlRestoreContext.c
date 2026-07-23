/*
 * XREFs of KasanWrapperRtlRestoreContext @ 0x140441B70
 * Callers:
 *     RtlRestoreContext @ 0x1404FA460 (RtlRestoreContext.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KasanWrapperRtlRestoreContext(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rdx
  ULONG_PTR v4; // rcx
  ULONG_PTR BugCheckParameter4; // rbx
  _BYTE *v6; // rdi
  unsigned __int64 CurrentStackPointer; // rax
  unsigned __int64 v8; // rbx
  _BYTE *v9; // rdi
  unsigned __int64 v11[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp+20h] BYREF

  v1 = &retaddr;
  v13 = 0;
  BugCheckParameter3 = 0LL;
  v11[0] = 0LL;
  if ( byte_140FCECA8 )
  {
    LODWORD(v1) = *(_DWORD *)(a1 + 48) & 0x100001;
    if ( (_DWORD)v1 == 1048577 )
    {
      if ( KeQueryCurrentStackInformationEx(*(_QWORD *)(a1 + 152), &v13, (char **)&BugCheckParameter3, v11) )
      {
        v4 = v13;
        if ( v13 )
        {
          v4 = v13 - 5;
          if ( v13 != 5 )
          {
            v4 = v13 - 7;
            if ( v13 != 7 )
            {
              v4 = v13 - 8;
              if ( (unsigned int)v4 >= 2 )
              {
                v4 = BugCheckParameter3;
                BugCheckParameter4 = *(_QWORD *)(a1 + 152) - BugCheckParameter3;
                if ( byte_140FCECA8 )
                {
                  if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
                    KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
                  if ( (BugCheckParameter3 & 7) != 0 )
                    KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
                  if ( BugCheckParameter4 + BugCheckParameter3 < BugCheckParameter3 )
                    KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, BugCheckParameter4);
                  v6 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
                  if ( BugCheckParameter4 >> 3 )
                  {
                    memset_0(
                      (void *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3)),
                      0,
                      BugCheckParameter4 >> 3);
                    v6 += BugCheckParameter4 >> 3;
                  }
                  if ( (BugCheckParameter4 & 7) != 0 )
                    *v6 = BugCheckParameter4 & 7;
                }
              }
            }
          }
        }
      }
      CurrentStackPointer = KeGetCurrentStackPointer(v4, v3);
      LOBYTE(v1) = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v13, (char **)&BugCheckParameter3, v11);
      if ( (_BYTE)v1 == 1 && v13 == 10 )
      {
        v8 = v11[0] - BugCheckParameter3;
        if ( byte_140FCECA8 )
        {
          if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
          if ( (BugCheckParameter3 & 7) != 0 )
            KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
          LOBYTE(v1) = v11[0];
          if ( v11[0] < BugCheckParameter3 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, v11[0] - BugCheckParameter3);
          v9 = (_BYTE *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3));
          if ( v8 >> 3 )
          {
            LOBYTE(v1) = (unsigned __int8)memset_0(
                                            (void *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3)),
                                            0,
                                            v8 >> 3);
            v9 += v8 >> 3;
          }
          if ( (v8 & 7) != 0 )
            *v9 = v8 & 7;
        }
      }
    }
  }
  return (char)v1;
}

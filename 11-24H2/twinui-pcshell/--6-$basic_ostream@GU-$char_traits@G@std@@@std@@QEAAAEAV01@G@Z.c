/*
 * XREFs of ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x18068B0EC
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1803474CC (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180348774 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::operator<<(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  __int64 v3; // r14
  __int16 v4; // ax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int16 v8; // ax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int16 v12; // ax
  __int16 v13; // ax
  int v14; // ecx
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  char v17; // [rsp+28h] [rbp-30h]
  unsigned int v19; // [rsp+68h] [rbp+10h]

  v1 = a1;
  v2 = 0;
  v19 = 0;
  std::basic_ostream<unsigned short>::sentry::sentry((__int64)&v16, a1);
  if ( v17 )
  {
    if ( std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) > 1 )
      v3 = std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) - 1;
    else
      v3 = 0LL;
    v4 = std::ios_base::flags((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL)));
    try
    {
      if ( (v4 & 0x1C0) == 0x40 )
      {
LABEL_12:
        v10 = std::basic_ios<unsigned short>::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
        if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v10, 44LL) == 0xFFFF )
          v2 = 4;
        v19 = v2;
        while ( !v2 && v3 > 0 )
        {
          v11 = std::basic_ios<unsigned short>::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v12 = std::basic_ios<unsigned short>::fill(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v13 = std::basic_streambuf<unsigned short>::sputc(v11, v12);
          --v3;
          v14 = 4;
          if ( v13 != -1 )
            v14 = 0;
          v2 = v14;
          v19 = v14;
        }
      }
      else
      {
        while ( !v2 )
        {
          if ( v3 <= 0 )
            goto LABEL_12;
          v6 = std::basic_ios<unsigned short>::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v7 = (unsigned __int16)std::basic_ios<unsigned short>::fill(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v8 = std::basic_streambuf<unsigned short>::sputc(v6, v7);
          --v3;
          v9 = 4;
          if ( v8 != -1 )
            v9 = 0;
          v2 = v9;
          v19 = v9;
        }
      }
    }
    catch ( ... )
    {
      LOBYTE(v5) = 1;
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v5);
      v1 = a1;
      v2 = v19;
    }
  }
  std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL)), 0LL);
  std::basic_ios<unsigned short>::setstate(v1 + *(int *)(*(_QWORD *)v1 + 4LL), v2, 0LL);
  std::basic_ostream<unsigned short>::sentry::~sentry(&v16);
  return v1;
}

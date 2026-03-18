/*
 * XREFs of ?MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z @ 0x14023EFB8
 * Callers:
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1400FD4E8 (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 * Callees:
 *     ?SafeStrLen@@YAJPEBGPEAI@Z @ 0x140158D6C (-SafeStrLen@@YAJPEBGPEAI@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x14023F270 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall CoreMessaging::Calling::SendProcessor::MarshalStringArray(
        CoreMessaging::Calling::SendProcessor *this,
        unsigned int *a2,
        _QWORD *a3,
        unsigned int a4)
{
  int *v6; // rdi
  size_t v7; // rbx
  int *v8; // r15
  int *v9; // rdi
  __int64 i; // rsi
  const unsigned __int16 *v11; // rcx
  const void *v12; // rcx
  unsigned int v13; // r14d
  unsigned int v14; // ebx
  char *v15; // rdi
  __int64 v16; // rbx
  CoreMessaging::Calling::SendProcessor *v17; // [rsp+50h] [rbp+8h] BYREF

  if ( a3 )
  {
    v17 = this;
    if ( a4 )
    {
      v6 = (int *)(a2 + 1);
      *a2 = a4;
      v7 = 2LL * a4;
      v8 = (int *)(a2 + 1);
      memset(a2 + 1, 0, v7 * 4);
      v9 = &v6[v7];
      for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
      {
        v11 = (const unsigned __int16 *)a3[i];
        if ( v11 )
        {
          LODWORD(v17) = 0;
          if ( (int)SafeStrLen(v11, (unsigned int *)&v17) < 0 )
            CoreMessaging::Calling::FailFast::Error(
              (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
              0x589uLL);
          v13 = 2 * (_DWORD)v17 + 2;
          v14 = (2 * (_DWORD)v17 + 5) & 0xFFFFFFFC;
          if ( v14 < v13 )
            CoreMessaging::Calling::FailFast::Error(
              (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
              0x590uLL);
          memmove(v9, v12, v13);
          if ( v14 == v13 )
          {
            v9 += (unsigned __int64)v14 >> 2;
          }
          else
          {
            v15 = (char *)v9 + v13;
            v16 = v14 - v13;
            memset(v15, 0, (unsigned int)v16);
            v9 = (int *)&v15[v16];
          }
        }
        else
        {
          *(_QWORD *)v8 = -1LL;
        }
        v8 += 2;
      }
    }
  }
}

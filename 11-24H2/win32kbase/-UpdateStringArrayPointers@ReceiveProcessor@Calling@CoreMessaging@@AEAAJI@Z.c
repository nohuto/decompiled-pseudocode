/*
 * XREFs of ?UpdateStringArrayPointers@ReceiveProcessor@Calling@CoreMessaging@@AEAAJI@Z @ 0x14023F164
 * Callers:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x14004B7F4 (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 * Callees:
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x14023F270 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::UpdateStringArrayPointers(
        CoreMessaging::Calling::ReceiveProcessor *this,
        unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v4; // rax
  unsigned int v5; // r9d
  _QWORD *v6; // rdx
  unsigned int v7; // esi
  _QWORD *v8; // rbx
  char *v9; // rdi
  _QWORD *v10; // r14
  unsigned int v11; // edx
  unsigned int v12; // r11d
  unsigned int v13; // edx

  v2 = 0;
  if ( !a2 )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x29CuLL);
  v4 = 8LL * a2;
  if ( v4 <= 0xFFFFFFFF )
  {
    v5 = v4 + 4;
    if ( *((_DWORD *)this + 21) >= (unsigned int)(v4 + 4) )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 52);
      v7 = 0;
      v8 = (_QWORD *)((char *)v6 + 4);
      v9 = (char *)&v6[v4 / 8] + 4;
      while ( v7 < a2 )
      {
        v10 = v6 + 1;
        if ( *v8 != -1LL )
        {
          *v6 = v9;
          v11 = 0;
          v12 = *((_DWORD *)this + 21) - v5;
          while ( v12 >= 2 )
          {
            if ( !*(_WORD *)&v9[2 * v11] )
            {
              v13 = (2 * v11 + 5) & 0xFFFFFFFC;
              v5 += v13;
              if ( *((_DWORD *)this + 21) < v5 )
                goto LABEL_18;
              v9 += 2 * ((unsigned __int64)v13 >> 1);
              goto LABEL_16;
            }
            ++v11;
            v12 -= 2;
            if ( v11 > 0x3FFFFFFE )
              goto LABEL_18;
          }
          goto LABEL_18;
        }
        *v6 = 0LL;
LABEL_16:
        ++v8;
        v6 = v10;
        ++v7;
      }
      if ( *((_DWORD *)this + 21) == v5 )
        return v2;
    }
  }
LABEL_18:
  *((_DWORD *)this + 30) = 7;
  return (unsigned int)-2147024809;
}

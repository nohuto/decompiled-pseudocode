/*
 * XREFs of sub_14000F6B0 @ 0x14000F6B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_14000F6B0(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v11; // esi
  __int64 v12; // r13
  unsigned int v13; // r14d
  char *v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  _DWORD v21[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE *v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  char v24; // [rsp+68h] [rbp-8h]
  int v25; // [rsp+69h] [rbp-7h]
  __int16 v26; // [rsp+6Dh] [rbp-3h]
  char v27; // [rsp+6Fh] [rbp-1h]

  v20 = 0LL;
  result = (unsigned int)dword_1400197C8;
  v19 = 0LL;
  v18 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( dword_1400197C8 >= (unsigned int)dword_140019154 )
  {
    result = KeCountSetBitsAffinityEx(a4);
    v11 = result;
    if ( (_DWORD)result )
    {
      result = a6 ? KeCountSetBitsAffinityEx(a6) : 0LL;
      if ( a3 > (unsigned int)result && a3 < v11 )
      {
        sub_140010680(byte_140019B40, 0LL, 16 * v11);
        v12 = 0LL;
        v13 = 0;
        KeInitializeEnumerationContext(&v19, a4);
        result = KeEnumerateNextProcessor(&v18, &v19);
        if ( !(_DWORD)result )
        {
          do
          {
            if ( v13 >= v11 )
              break;
            v14 = &byte_140019B40[16 * v13];
            v12 = *((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + v18);
            *(_QWORD *)v14 = *(_QWORD *)(v12 + 1120);
            v14[9] = 0;
            if ( a6 && (unsigned int)KeCheckProcessorAffinityEx(a6) )
            {
              v15 = a3 - 1;
              v14[8] = 2;
              if ( !a3 )
                v15 = 0;
              a3 = v15;
            }
            else
            {
              v14[8] = a5 && (unsigned int)KeCheckProcessorAffinityEx(a5);
            }
            ++v13;
            result = KeEnumerateNextProcessor(&v18, &v19);
          }
          while ( !(_DWORD)result );
          if ( v13 && v12 )
          {
            v24 = a1;
            v21[1] = v13;
            v23 = a2;
            v21[0] = a3;
            v22 = byte_140019B40;
            result = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1400194E0)(*(_QWORD *)(v12 + 1120), v21);
            if ( (int)result < 0 )
            {
              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
                return sub_1400050F8(
                         (__int64)off_140018050->DeviceExtension,
                         3u,
                         2u,
                         0x14u,
                         (__int64)&unk_140014CC8,
                         result);
              return result;
            }
            v16 = 0;
            KeInitializeEnumerationContext(&v19, a4);
            while ( 1 )
            {
              result = KeEnumerateNextProcessor(&v18, &v19);
              if ( (_DWORD)result || v16 >= v11 )
                return result;
              if ( byte_140019B40[16 * v16 + 9] == 1 )
              {
                v17 = a7;
              }
              else
              {
                if ( byte_140019B40[16 * v16 + 9] != 2 )
                  goto LABEL_32;
                v17 = a8;
              }
              KeAddProcessorAffinityEx(v17, v18);
LABEL_32:
              ++v16;
            }
          }
        }
      }
    }
  }
  return result;
}

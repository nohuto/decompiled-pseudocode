/*
 * XREFs of sub_140003510 @ 0x140003510
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_140003510(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // r14
  int v7; // edx
  _DWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  void *v10; // [rsp+40h] [rbp-20h]
  __int128 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h]
  unsigned int v13; // [rsp+A0h] [rbp+40h] BYREF

  result = 0LL;
  v13 = 0;
  v8[1] = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( !byte_140019B25 )
  {
    result = (unsigned int)dword_1400197C8;
    if ( dword_1400197C8 >= (unsigned int)dword_140019154 )
    {
      sub_140010680(&unk_140019B40, 0LL, (unsigned int)(16 * dword_140019154));
      v5 = 0;
      KeInitializeEnumerationContext(&v11, &unk_140019580);
      result = KeEnumerateNextProcessor(&v13, &v11);
      if ( !(_DWORD)result )
      {
        do
        {
          v6 = *((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + v13);
          *((_QWORD *)&unk_140019B40 + 2 * v5) = *(_QWORD *)(v6 + 1120);
          *((_BYTE *)&unk_140019B40 + 16 * v5++ + 8) = KeCheckProcessorAffinityEx(a2);
          result = KeEnumerateNextProcessor(&v13, &v11);
        }
        while ( !(_DWORD)result );
        if ( v5 )
        {
          v9 = a1;
          v8[0] = v5;
          v10 = &unk_140019B40;
          result = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1400194E8)(*(_QWORD *)(v6 + 1120), v8);
          if ( (int)result < 0 )
          {
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              LOBYTE(v7) = 4;
              result = sub_1400050F8(off_140018050->DeviceExtension, v7, 2, 21, (__int64)&unk_140014CC8, result);
            }
            byte_140019B25 = 1;
          }
        }
      }
    }
  }
  return result;
}

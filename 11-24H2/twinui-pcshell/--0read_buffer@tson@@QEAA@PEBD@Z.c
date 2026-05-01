/*
 * XREFs of ??0read_buffer@tson@@QEAA@PEBD@Z @ 0x1801D928C
 * Callers:
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x18028E47C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@.c)
 *     ?deserialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x1803C2648 (-deserialize_data@-$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z.c)
 * Callees:
 *     <none>
 */

tson::read_buffer *__fastcall tson::read_buffer::read_buffer(tson::read_buffer *this, const char *a2)
{
  unsigned __int64 v3; // rdx

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a2;
  *((_BYTE *)this + 24) = 0;
  if ( a2 && *a2 && a2[1] && a2[2] && a2[3] && !a2[4] && (*(_DWORD *)a2 & 0xC0C0C0C0) == 0x80408040 )
  {
    v3 = *(_DWORD *)a2 & 0x3F | ((*(_DWORD *)a2 & 0x3F00 | ((*(_DWORD *)a2 & 0x3F0000 | (unsigned __int64)((*(_DWORD *)a2 >> 2) & 0xFC00000)) >> 2)) >> 2);
    *((_QWORD *)this + 1) = a2 + 5;
    *((_QWORD *)this + 2) = &a2[v3];
  }
  else
  {
    *((_BYTE *)this + 24) = 1;
  }
  return this;
}

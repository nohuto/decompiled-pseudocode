/*
 * XREFs of TraceDxgkDevice @ 0x14004DB70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004DCCC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 */

__int64 __fastcall TraceDxgkDevice(
        int a1,
        char a2,
        int a3,
        char a4,
        __int64 a5,
        char a6,
        unsigned __int8 a7,
        char a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        return McTemplateK0ppqpttqpqp_EtwWriteTransfer(
                 a7,
                 (unsigned int)&EventDestroyDevice,
                 a3,
                 a3,
                 a2,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      return McTemplateK0ppqpttqpqp_EtwWriteTransfer(
               a7,
               (unsigned int)&EventReportDevice,
               a3,
               a3,
               a2,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11);
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
  {
    return McTemplateK0ppqpttqpqp_EtwWriteTransfer(
             a7,
             (unsigned int)&EventCreateDevice,
             a3,
             a3,
             a2,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11);
  }
  return result;
}

/*
 * XREFs of ?GetDevice@CDxHandleBitmapRealization@@UEBAPEAVCD3DDevice@@XZ @ 0x180210B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDxHandleBitmapRealization::GetDevice(CDxHandleBitmapRealization *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
    return (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  else
    return 0LL;
}

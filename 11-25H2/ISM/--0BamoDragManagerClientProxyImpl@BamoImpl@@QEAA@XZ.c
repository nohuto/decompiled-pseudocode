/*
 * XREFs of ??0BamoDragManagerClientProxyImpl@BamoImpl@@QEAA@XZ @ 0x18002F0D0
 * Callers:
 *     ??0DragManagerClientProxy@@QEAA@XZ @ 0x18002F100 (--0DragManagerClientProxy@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

BamoImpl::BamoDragManagerClientProxyImpl *__fastcall BamoImpl::BamoDragManagerClientProxyImpl::BamoDragManagerClientProxyImpl(
        BamoImpl::BamoDragManagerClientProxyImpl *this)
{
  BamoImpl::BamoDragManagerClientProxyImpl *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &BamoImpl::BamoDragManagerClientProxyImpl::`vftable';
  result = this;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  return result;
}

/*
 * XREFs of ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x18009A364
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x18009DCB4 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 */

wil::ResultException *__fastcall wil::ResultException::ResultException(
        wil::ResultException *this,
        const struct wil::ResultException *a2)
{
  wil::details::shared_buffer *v4; // rcx

  *(_QWORD *)this = &stdext::exception::`vftable';
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *(_QWORD *)this = &wil::ResultException::`vftable';
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 9);
  *((_QWORD *)this + 20) = *((_QWORD *)a2 + 20);
  v4 = (wil::ResultException *)((char *)this + 168);
  *(_QWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  wil::details::shared_buffer::assign(v4, *((int **)a2 + 21), *((_QWORD *)a2 + 22));
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  wil::details::shared_buffer::assign(
    (wil::ResultException *)((char *)this + 184),
    *((int **)a2 + 23),
    *((_QWORD *)a2 + 24));
  return this;
}
